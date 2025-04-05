#ifndef AUTO_H
#define AUTO_H
#include <string>
#include <iostream>
using namespace std;

class Auto{
private:
string color;
string tipo; //camioneta o carro
string placa;

public:
//tienda(int,int);
Auto();
Auto(string color, string tipo, string placa);
~Auto();
void pedir_datos();
string get_color();
string get_tipo();
string get_placa();
};
#endif