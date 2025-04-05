#include <iostream>
#include "Parqueadero.h"

using namespace std;

int main(){

  Parqueadero parqueadero;
  cout<<"****PARQUEADERO****"<<endl;
  cout<<"Ingrese los datos de los cinco vehiculos:"<<endl;
  parqueadero.pedir_datos();
  parqueadero.mostrar_datos();

  int camionets=parqueadero.camionetas();
  cout<<"El numero de camionetas es: "<<camionets<<endl;
  int autos=parqueadero.automoviles();
  cout<<"El numero de automoviles es: "<<autos<<endl;
  cout<<"Las ganancias totales del parqueadero fueron: "<<parqueadero.dinero(camionets,autos)<<endl;
  cout<<"***Gracias por usar el programa***"<<endl; 
  
}