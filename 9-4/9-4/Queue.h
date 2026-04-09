#pragma once
#include <iostream>
using namespace std;
#define MAX_SIZE 256 /* capacidad máxima */
typedef char almacen[MAX_SIZE];

class Queue {

    int cabeza; /* puntero de lectura */
    int cola; /* puntero de escritura */
    int ITEMS; /* número de elementos en la lista */
    int ITEMSIZE; /* tamaño de cada elemento */
    almacen alma; /* el almacen */

public:
    // constructor
    Queue();

    // destructor
    ~Queue();

    // regresa 1 (true) si la lista está vacia
    int empty();

    // insertar elemento a la lista
    int put(int d);

    // retirar elemento de la lista
    int get();

    // regresa el n£mero de elementos en lista
    int size();

}; // fin de la clase Queue
