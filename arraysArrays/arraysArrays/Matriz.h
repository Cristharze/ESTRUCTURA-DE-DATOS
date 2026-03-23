
#pragma once
#include "Vector.h"

class Matriz
{
	private:
		Vector dato[MAX][MAX];
		int n;
	public:
		Matriz();
		void setN(int tam);
		int getN();
		void generar(Vector v[], int tam);
		void mostrar(int tam);
};

