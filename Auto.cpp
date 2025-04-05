#include "Auto.h" 
#include <string>

Auto::Auto()
{
    color="XX";
    tipo="YY";
    placa="ZZ";
}

Auto::Auto(string color, string tipo, string placa)
{
  this->color=color; // this->  se usa para hacer referencia a los atributos del objeto y
                // diferenciarlos de los parámetros
  this->tipo=tipo;   // dado que los parametros se llaman igual que los atributos
  this->placa=placa;
}

Auto::~Auto()
{
    //destructor
}

void Auto::pedir_datos()

{
    cout<<"Ingrese el color del vehiculo: ";
    cin>>color;
    cout<<"Ingrese el tipo de vehiculo (camioneta/automovil): ";
    cin>>tipo;
    cout<<"Ingrese la placa del vehiculo: ";
    cin>>placa;
    cout<<endl;
}

string Auto::get_color(){
    return color;
}

string Auto::get_tipo(){
    return tipo;
}

string Auto::get_placa(){
    return placa;
}