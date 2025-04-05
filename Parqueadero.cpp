#include "Parqueadero.h"


Parqueadero::Parqueadero()
{ //Si es composición en el mètodo constructor
    //del Parqueadero se inicializan los puntos
    //ya con valores
  string propietario="XX";
  string ubicacion="YY";
  Auto a1;
  Auto a2;
  Auto a3;
  Auto a4;
  Auto a5;
    
}

Parqueadero::Parqueadero(string propietario, string ubicacion, Auto a1, Auto a2, Auto a3, Auto a4, Auto a5)
{
    this->propietario=propietario;
    this->ubicacion=ubicacion;
    Auto auto1=a1;
    Auto auto2=a2;
    Auto auto3=a3;
    Auto auto4=a4;
    Auto auto5=a5;
}

Parqueadero::~Parqueadero()
{

}

void Parqueadero::pedir_datos()
{
    propietario="German López";
    ubicacion="calle 13 con k 12 de la ciudad de cali";
    auto1.pedir_datos();
    auto2.pedir_datos();
    auto3.pedir_datos();
    auto4.pedir_datos();
    auto5.pedir_datos();
}


void Parqueadero::mostrar_datos()
{ 
   cout<<"****PROPIETARIO: "<<propietario<<"****"<<endl;
   cout<<"****UBICACION: "<<ubicacion<<"****"<<endl<<endl;
   
   cout<<"El auto numero 1 tiene los siguientes datos: "<<endl;
   cout<<"placa: "<<auto1.get_placa()<<endl;
   cout<<"color: "<<auto1.get_color()<<endl;
   cout<<"tipo: "<<auto1.get_tipo()<<endl<<endl;

   cout<<"El auto numero 2 tiene los siguientes datos: "<<endl;
   cout<<"placa: "<<auto2.get_placa()<<endl;
   cout<<"color: "<<auto2.get_color()<<endl;
   cout<<"tipo: "<<auto2.get_tipo()<<endl<<endl;

   cout<<"El auto numero 3 tiene los siguientes datos: "<<endl;
   cout<<"placa: "<<auto3.get_placa()<<endl;
   cout<<"color: "<<auto3.get_color()<<endl;
   cout<<"tipo: "<<auto3.get_tipo()<<endl<<endl;

   cout<<"El auto numero 4 tiene los siguientes datos: "<<endl;
   cout<<"placa: "<<auto4.get_placa()<<endl;
   cout<<"color: "<<auto4.get_color()<<endl;
   cout<<"tipo: "<<auto4.get_tipo()<<endl<<endl;

   cout<<"El auto numero 5 tiene los siguientes datos: "<<endl;
   cout<<"placa: "<<auto5.get_placa()<<endl;
   cout<<"color: "<<auto5.get_color()<<endl;
   cout<<"tipo: "<<auto5.get_tipo()<<endl<<endl;
}


int Parqueadero::camionetas()
{
    int camionets=0;
    if(auto1.get_tipo()=="camioneta")
        camionets++;
    if(auto2.get_tipo()=="camioneta")
        camionets++;
    if(auto3.get_tipo()=="camioneta")
        camionets++;
    if(auto4.get_tipo()=="camioneta")
        camionets++;
    if(auto5.get_tipo()=="camioneta")
        camionets++;

    return camionets;
}

int Parqueadero::automoviles()
{
    int autos=0;
    if(auto1.get_tipo()=="automovil")
        autos++;
    if(auto2.get_tipo()=="automovil")
        autos++;
    if(auto3.get_tipo()=="automovil")
        autos++;
    if(auto4.get_tipo()=="automovil")
        autos++;
    if(auto5.get_tipo()=="automovil")
        autos++;

    return autos;
}

int Parqueadero::dinero(int camionets, int autos)
{
    int ganancia=(camionets*5000)+(autos*3000);
    return ganancia;

}

Auto Parqueadero::get_a1(){
    return auto1;
}

Auto Parqueadero::get_a2(){
    return auto2;
}

Auto Parqueadero::get_a3(){
    return auto3;
}

Auto Parqueadero::get_a4(){
    return auto4;
}

Auto Parqueadero::get_a5(){
    return auto5;
}

