#pragma once
#include <iostream>
using namespace std;
class Nodo
{
public:
    string valor;
    Nodo* sig;

    Nodo(string v) : valor(v), sig(nullptr) {}
};

