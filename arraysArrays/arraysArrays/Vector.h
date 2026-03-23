#pragma once
#define MAX 10
#include <iostream>
#include <string>
using namespace std;

class Vector
{
	private: //Atributos
		string dato[MAX];
		int n;
	public: //metodos
		Vector();
		void cargar(int tam);
		void mostrar(int tam); //Este estilo es para trabajar con los atributos. const
		void setDato(int pos, string valor);
		string getDato(int pos) const;
		void setN(int tam);
		int getN() const;
};

