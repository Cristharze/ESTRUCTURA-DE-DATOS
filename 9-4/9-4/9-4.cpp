
#include <iostream>
#include "Queue.h"
using namespace std;
#define MAX_SIZE 256 /* capacidad máxima */
typedef char almacen[MAX_SIZE];

void Menu();

// probando la cola
int main()
{
    Queue q;
    int opcion;
    do {
        do {
			Menu();
            cout << "Ingrese la opcion: ";
            cin >> opcion;
        } while (opcion >= 4 || opcion<1);
        switch (opcion) {
        case 1: {
                char d;
                cout << "Ingrese el elemento a insertar: ";
                cin >> d;
                q.put(d);
                break;
            }
        case 2: {
                char d;
                d = q.get();
                if (d == -1) {
                    cout << "La lista está vacía" << endl;
                }
                else {
                    cout << "Elemento retirado: " << d << endl;
                }
                break;
            }
        case 3: {
                cout << "Número de elementos en la lista: " << q.size() << endl;
                break;
            }
        case 4: {
                cout << "Saliendo..." << endl;
                break;
            }
        default: {
                cout << "Opción no válida. Intente de nuevo." << endl;
                break;
            }
        }
    } while (opcion != 4);
    return 0;
}
void Menu() {
    cout << endl<< "1. Insertar elemento a la lista" << endl;
    cout << "2. Retirar elemento de la lista" << endl;
    cout << "3. Regresar el numero de elementos en lista" << endl;
    cout << "4. Salir" << endl;
}