#ifndef PARQUEADERO_H
#define PARQUEADERO_H

#include <string>
#include <iostream>
#include "Auto.h"
using namespace std;

class Parqueadero{

private:
string propietario;
string ubicacion;
Auto auto1;
Auto auto2;
Auto auto3;
Auto auto4;
Auto auto5;

public:
Parqueadero();
Parqueadero(string propietario, string ubicacion, Auto a1, Auto a2, Auto a3, Auto a4, Auto a5);
~Parqueadero();
void pedir_datos();
void mostrar_datos();

int camionetas();
int automoviles();

int dinero(int camionets,int autos);

Auto get_a1();
Auto get_a2();
Auto get_a3();
Auto get_a4();
Auto get_a5();

};

#endif