// arraysArrays.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Vector.h"
#define MAX 10
using namespace std;

void cargarVectorDeVectres(Vector v[], int n);
void generarMatriz(Vector v[], Vector m[][MAX], int n);
void mostrarVectorDeVectores(Vector v[], int n);
void mostrarMatriz(Vector m[][MAX], int n);

int main()
{
	int tamanio;
	Vector vec[MAX];
	Vector matriz[MAX][MAX];
	do {
		cout << "Ingrese el tamanio: ";
		cin >> tamanio;
	} while (tamanio<=0 || tamanio>MAX);
	cargarVectorDeVectres(vec, tamanio);
	generarMatriz(vec, matriz, tamanio);
	mostrarVectorDeVectores(vec, tamanio);
	mostrarMatriz(matriz, tamanio);
}
void cargarVectorDeVectres(Vector v[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "Cargando vector[" << i << "]:";
		v[i].cargar(n);
	}
}
void generarMatriz(Vector v[], Vector m[][MAX], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			m[i][j].setN(n);
			for (int k = 0; k < n; k++)
				m[i][j].setDato(k, v[i].getDato(j));
		}
	}
}
void mostrarVectorDeVectores(Vector v[], int n) {
	cout << "Mostrar vector de Vectores: " << endl;
	for (int i = 0; i < n; i++) {
		cout << "V[" << i << "]: ";
		v[i].mostrar(n);
	}
}
void mostrarMatriz(Vector m[][MAX], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			m[i][j].setN(n);
			for (int k = 0; k < n; k++) {
				m[i][j].mostrar(n);
				cout << " ";
			}
		}
	}
}
