// colaCircular.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "ColaCircular.h"
#include "Nodo.h"

int main() {
    ColaCircular cola;

    cola.encolar("Juan");
    cola.encolar("Maria");
    cola.encolar("Pedro");

    cola.mostrar();

    cout << "Atendiendo: " << cola.desencolar() << endl;
    cola.mostrar();

    cola.encolar("Luis");
    cola.mostrar();

    cout << "Atendiendo: " << cola.desencolar() << endl;
    cout << "Atendiendo: " << cola.desencolar() << endl;
    cola.mostrar();

    return 0;
}
