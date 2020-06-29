#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <iomanip>

#define		FALSE 0
#define		TRUE  1

#define 	MAXLINEA 	255
#define 	MAXCAMPO	41
#define 	TOPEVECTOR 	200

using namespace std;

typedef char 	str40[MAXCAMPO];
typedef char 	str_linea[MAXLINEA];

typedef struct ty_libro
{
	int		iCodigo;
	str40	sAutor;
	str40	sNombre;
	float 	fPrecio;
	int   	iStock;
};

//Una línea del archivo seria la siguiente:
//2;Huenun, Jaime;20 Poetas Mapuche Contemporaneos;2.91;3

void main()
{
	FILE		*pArchivo;
	ty_libro 	vLibro[TOPEVECTOR];
	char 		*token;
	str_linea 	linea;
	int 		i = 0;


	//Abro el archivo en modo lectura
	pArchivo = fopen("C:\\libros.csv", "rt");
	if (pArchivo == NULL)
	{
		cout << "No se pudo abrir el Archivo de Entrada.\n";
	}
	else
	{
		cout << "El archivo se abrio correctamente.\n";
	}
	//Parseo el archivo hasta la marca de fin de archivo
	//y voy guardando los registros en el vector de registros
	while (!feof(pArchivo))
	{
		fgets(linea, MAXLINEA, pArchivo);

		token = strtok(linea, ";");
		vLibro[i].iCodigo = atoi(token);

		token = strtok(NULL, ";");
		strcpy(vLibro[i].sAutor, token);

		token = strtok(NULL, ";");
		strcpy(vLibro[i].sNombre, token);

		token = strtok(NULL, ";");
		vLibro[i].fPrecio = atof(token);

		token = strtok(NULL, ";");
		vLibro[i].iStock = atoi(token);
		i++;
	}
	//Cierro el archivo
	fclose(pArchivo);
	//Muestro parte del contenido para verificar el correcto parseo
	for (i = 0;i<2;i++)
	{
		cout << "Codigo: " << vLibro[i].iCodigo << endl;
		cout << "Nombre: " << vLibro[i].sNombre << endl;
		cout << "Autor: " << vLibro[i].sAutor << endl;
		cout << "Precio: " << vLibro[i].fPrecio << endl;
		cout << "Stock: " << vLibro[i].iStock << endl;
		cout << setw(8) << setfill('-') << "-" << endl;
	}
	getchar();
}
