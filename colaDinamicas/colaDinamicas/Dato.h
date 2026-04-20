#pragma once 
#include <string>
using namespace std;
class Dato {
public:
    string Nombre;
    string Genero;
    string Artista;
    double ID;
    float Duracion;

    Dato() {
        Nombre = "Unknow";
        Genero = "Unknow";
        Artista= "Unknow";
        ID= 0;
        Duracion = 0;
    }
};
