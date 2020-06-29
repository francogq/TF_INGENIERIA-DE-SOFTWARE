#pragma once

using namespace System;
using namespace System::Drawing;
using namespace System::Collections::Generic;

namespace Juego {
	ref class CObjeto {
	protected:
		Rectangle area;
	public:
		CObjeto() { }
		CObjeto(Rectangle area) : area(area) { }
		Rectangle getArea() { return this->area; }
		void posicionar(Point p) { this->area.Location = p; }
		virtual void animar(Graphics^ graficador) {
			dibujar(graficador);
		}
		bool colision(CObjeto^ otro) {
			return this->area.IntersectsWith(otro->getArea());
		}
	protected:
		virtual void dibujar(Graphics^ graficador) {}
	};
	ref class CEscenario : public CObjeto {
		Bitmap^ img;
	public:
		CEscenario(Rectangle area) : CObjeto(area) {
			img = gcnew Bitmap("fotos\\Escenario.jpg");
		}
	protected:
		void dibujar(Graphics^ graficador) override {
			graficador->DrawImage(img, area);
		}
	};
	ref class CBoomerang : public CObjeto {
		short limiteX;
	public:
		CBoomerang(short x, short y, short limiteX) {
			//x: el x+ancho de Link
			//y: 1/4 del alto de Link    
			this->area = Rectangle(x, y, 40, 40);
			this->limiteX = limiteX;
		}
		bool mover() {
			short x = area.Location.X + 10;
			short y = area.Location.Y;
			area.Location = Point(x, y);
			return x + area.Width <= limiteX;
		}
	protected:
		void dibujar(Graphics^ graficador) override {
			Pen^ lapicero = gcnew Pen(Color::Red, 5);
			graficador->DrawArc(lapicero, this->area, 270, 180);
		}
	};
	ref class CEnemigo : public CObjeto {
		Bitmap^ img;
		short nroSubimagenes;
		short indice;
		short dx;
	public:
		CEnemigo(Rectangle area, Bitmap^ img, short dx) : CObjeto(area), img(img), dx(dx) {
			indice = 0;
			nroSubimagenes = 3;
		}
		bool mover() {
			short x = area.Location.X + dx;
			short y = area.Location.Y;
			area.Location = Point(x, y);
			return x + area.Width > 0;
		}
	protected:
		void dibujar(Graphics^ graficador) override {
			Rectangle region = obtenerRegion();
			graficador->DrawImage(img, area, region, GraphicsUnit::Pixel);
			indice++;
			indice %= nroSubimagenes;
		}
	private:
		Rectangle obtenerRegion() {
			short ancho = this->img->Width / this->nroSubimagenes;
			short alto = this->img->Height;
			short x = this->indice * ancho;
			short y = 0;
			return Rectangle(x, y, ancho, alto);
		}
	};
	ref class CPersonaje : public CObjeto {

		Bitmap^ img;
		List<CBoomerang^>^ boomerangs;
		short numBoomerangs;
		
	public:
		int vidas = 5;
		int puntos = 0;
		CPersonaje() : CObjeto(area) {
			Random r;
			numBoomerangs = r.Next(3, 6);
			boomerangs = gcnew List<CBoomerang^>;
			img = gcnew Bitmap("fotos\\Link.png");
			img->MakeTransparent(Color::White);
			area = Rectangle(50, 300, 50, 70);
		}
		~CPersonaje() {
			delete img;
		}
		void mover(short alturaE, short dy, short dx) {
			short x = area.Location.X + dx;
			short y = area.Location.Y + dy;
			if (y > 0 && y < alturaE - 70)
				area.Location = Point(x, y);
		}

		void posicion() {
			area.Location = Point(50, 300);

		}
		void lanzarBoomerang(short limiteX) {
			if (this->boomerangs->Count < numBoomerangs) {
				short xBoomerang = this->area.X + this->area.Width;
				short yBoomerang = this->area.Y + this->area.Height / 4;
				CBoomerang^ boomerang = gcnew CBoomerang(xBoomerang, yBoomerang, limiteX);
				this->boomerangs->Add(boomerang);
				
			}
		}
		void eliminarBoomerang(short i) {
			delete this->boomerangs[i];
			this->boomerangs->RemoveAt(i);
	
			
		}
		List<CBoomerang^>^ getBoomerangs() { return this->boomerangs; }

		void setVidas(int _vidas) { vidas = _vidas; };
		int getVidas() { return vidas; }
		int getPuntos() { return puntos; }
		


	protected:
		void dibujar(Graphics^ graficador) override {
			graficador->DrawImage(img, area);
			for (short i = 0; i < this->boomerangs->Count; i++) {
				CBoomerang^ boomerang = this->boomerangs[i];
				boomerang->animar(graficador);
				if (boomerang->mover() == false)
					this->eliminarBoomerang(i);
			}
		}
	};
	ref class CHorda {
		Bitmap^ imgEnemigo;
		List<CEnemigo^>^ enemigos;
	public:
		CHorda(Drawing::Size limites) {
			enemigos = gcnew List<CEnemigo^>;
			this->imgEnemigo = gcnew Bitmap("fotos\\Enemigo.png");
			this->imgEnemigo->MakeTransparent(Color::White);
			agregarEnemigos(limites);
		}
		~CHorda() {
			delete enemigos;
		}
		bool animar(Graphics^ graficador) {
			bool ganamos = false;
			for (short i = 0; i < enemigos->Count; i++) {
				//enemigos[i]->animar(graficador); <- esta linea es lo mismo que las 2 siguientes
				CEnemigo^ enemigo = enemigos[i];
				enemigo->animar(graficador);
				if (enemigo->mover() == false)
					ganamos = true;
			}
			return !ganamos;
		}
		bool existen() { return (bool)this->enemigos->Count; }
		bool matarPersonaje(CPersonaje^ personaje) {
			for (short i = 0; i < enemigos->Count; i++) {
				CEnemigo^ enemigo = enemigos[i];
				if (enemigo->colision(personaje)) {
					personaje->vidas--;
					personaje->posicion();
				}
				else if (personaje->vidas == 0) {
					return true;
				}
			}
			return false;
		}
		List<CEnemigo^>^ getEnemigos() { return this->enemigos; }
		void eliminarEnemigo(short i) {

			delete this->enemigos[i];
			this->enemigos->RemoveAt(i);
		}
	private:
		void agregarEnemigos(Drawing::Size limites) {
			Random r;
			short n = r.Next(4, 9);
			for (short i = 0; i < n; i++) {
				short x = r.Next(limites.Width / 2, limites.Width - 50);
				short y = r.Next(0, limites.Height - 50);
				short velocidad = r.Next(-3, 0);
				this->enemigos->Add(gcnew CEnemigo(Rectangle(x, y, 50, 50), imgEnemigo, velocidad));
			}
		}
	};
	ref class CJuego {
		CEscenario^ escenario;
		CHorda^ enemigos;
		CPersonaje^ Link;
	
	public:
		int tiempo =50;
		CJuego(Rectangle area) {
			this->escenario = gcnew CEscenario(area);
			this->enemigos = gcnew CHorda(area.Size);
			this->Link = gcnew CPersonaje();
		}
		bool jugar(Graphics^ graficador) {
			bool continuar = true;
			this->escenario->animar(graficador);
			this->Link->animar(graficador);
			this->eliminarEnemigos();
			tiempo--;
			continuar = !(this->enemigos->animar(graficador) == false ||
				this->enemigos->matarPersonaje(Link) == true ||
				this->enemigos->existen() == false);
			if (tiempo == 0) {
				Bitmap^ imgFinal;
				imgFinal = gcnew Bitmap("fotos\\Perdiste.png");
				imgFinal->MakeTransparent(Color::White);
				graficador->DrawImage(imgFinal, this->escenario->getArea());
				continuar = false;
				
			}
			else if (continuar == false) {
				Bitmap^ imgFinal;
				if (this->enemigos->existen())
					imgFinal = gcnew Bitmap("fotos\\Perdiste.png");
				else imgFinal = gcnew Bitmap("fotos\\Ganaste.png");
				imgFinal->MakeTransparent(Color::White);
				graficador->DrawImage(imgFinal, this->escenario->getArea());
			}
			
			return continuar;
		}
		void moverPersonaje(short dy, short dx) {
			this->Link->mover(escenario->getArea().Height, dy, dx);
		}
		void lanzarBoomerang(short limiteX) {
			this->Link->lanzarBoomerang(limiteX);
			
		}

		int vidasL() { return  this->Link->getVidas(); }
		int puntosL() { return  this->Link->getPuntos(); }

	private:
		//TODO: Revisar pq no se validan correctamente las colisiones
		void eliminarEnemigos() {
			for (short i = 0; i < this->Link->getBoomerangs()->Count; i++) {
				CBoomerang^ boomerang = this->Link->getBoomerangs()[i];
				for (short j = 0; j < this->enemigos->getEnemigos()->Count; j++) {
					CEnemigo^ enemigo = this->enemigos->getEnemigos()[j];
					if (boomerang->colision(enemigo)) {
						Link->eliminarBoomerang(i);
						enemigos->eliminarEnemigo(j);
						Link->puntos++;
						
					

					}
				}
			}
		}
	};
}