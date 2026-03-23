#include "Vector.h"

Vector::Vector() {
	n = 0;
}
void Vector::cargar(int tam) {
	n = tam; //esta modificando el atributo de la clase que va a afectar al objeto
	for (int i = 0; i < n; i++) {
		cout << "Dato[" << i << "]:";
		cin >> dato[i];
	}
}
void Vector::mostrar(int tam) {
	n = tam;
	cout << "[";
	for (int i = 0; i < n; i++) {
		cout << dato[i] << " ";
	}
	cout << "]";
}
void Vector::setDato(int pos, string valor) {
	dato[pos] = valor;
}
string Vector::getDato(int pos) const {
	return dato[pos];
}
void Vector::setN(int tam) {
	n = tam;
}
int Vector::getN() const {
	return n;
}