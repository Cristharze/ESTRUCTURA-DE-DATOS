#pragma once
#include "nodo.h"
class QueueDin {

	// atributos
	int ITEMS, ITEMSIZE;
	nodo* cola, * cabeza;

public:
	// constructor
	QueueDin();

	// destructor
	~QueueDin();

	/* agregar componente a la lista */
	DATA_TYPE put(DATA_TYPE valor);

	// regresa 1 (true) si la lista está vacia
	int empty();

	/* retirar elemento de la lista */
	DATA_TYPE get();
};

