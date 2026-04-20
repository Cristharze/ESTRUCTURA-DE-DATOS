#include <iostream> 
#include "Nodo.h" //Se incluye a la clase Nodo
using namespace std;
void Encolar(Nodo*& inicio, Nodo*& fin);
void Desencolar(Nodo*& inicio);

int main(int argc, char* argv[]) {
    Nodo* inicio = NULL, * fin = NULL; //Punteros libres para el manejo de la cola
    int opc = 0, respuesta = 0;
    do {
        cout << "1. LA COLA ESTA VACIA?" << endl;
        cout << "2. ENCOLAR" << endl;
        cout << "3. DESENCOLAR" << endl;
        cout << "4. FINALIZAR" << endl;
        cout << "Opcion: "; cin >> opc;
        switch (opc) {
        case 1:
            if (inicio == NULL)
                cout << "La cola se encuentra vacia" << endl;
            else
                cout << "Existe elemento(s) dentro de la cola" << endl;
            break;
        case 2:
            Encolar(inicio, fin);
            break;
        case 3:
            Desencolar(inicio);
            break;
        }
    } while (opc != 4);
    return 0;
}
void Encolar(Nodo*& inicio, Nodo*& fin) { //Punteros enviados por referencia      
    Nodo* Elemento = new Nodo; //Creacion del nodo      
    if (inicio == NULL) {

        inicio = fin = Elemento; //Le asigno la direccion del primer nodo 
        cin.ignore();
        cout << "Nombres: "; getline(cin, Elemento->dato.Nombre);
        cout << "Genero: "; getline(cin, Elemento->dato.Genero);
        cout << "Artista: "; getline(cin, Elemento->dato.Artista);
        cout << "Tiempo de duracion en min.: "; cin >> Elemento->dato.Duracion;
        cout << "ID: "; cin >> Elemento->dato.ID;
    }
    else {

        fin->puntero = Elemento; //Asigno el puntero del anterior elemento al nuevo

        fin = Elemento; //Cambio la direccion del ultimo nodo creado 

        cout << "Nombres: "; getline(cin, Elemento->dato.Nombre);
        cout << "Genero: "; getline(cin, Elemento->dato.Genero);
        cout << "Artista: "; getline(cin, Elemento->dato.Artista);
        cout << "Tiempo de duracion: "; cin >> Elemento->dato.Duracion;
        cout << "ID: "; cin >> Elemento->dato.ID;
    }

} 
void Desencolar(Nodo*& inicio) {
    if (inicio != NULL) {
        cout << "Nombres: " << inicio->dato.Nombre << endl;
        cout << "Genero: " << inicio->dato.Genero << endl;
        cout << "Artista: " << inicio->dato.Artista << endl;
        cout << "ID: " << inicio->dato.ID << endl;
        cout << "Tiempo de duracion: " << inicio->dato.Duracion << endl;
        inicio = inicio->puntero; // Cambio Inicio al siguiente nodo
    }
    else {
        cout << "La cola se encuentra vacia" << endl;
    }
}