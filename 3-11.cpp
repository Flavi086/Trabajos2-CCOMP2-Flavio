#include <iostream>
#include <string>
using namespace std;
#include "3-11.h"

int main() {
    string marca, tipodecombustible, color;
    int aniofabri, capacidad;
    cout << "ingrese la marca del coche: " , cin >> marca;
    cout << "ingresa el tipo de combustible que usa: ", cin >> tipodecombustible;
    cout << "ingresa el anio de fabricacion: ", cin >> aniofabri;
    cout << "ingresa el color del coche: ", cin >> color;
    cout << "ingresa la capacidad del motor: ", cin >> capacidad;

    Motor vehicle(marca, tipodecombustible, aniofabri, color, capacidad);

cout <<"------------------------------------------------------------------------------------------------"<<endl;
    cout <<"Marca del coche: "<< vehicle.getMarca() <<endl;
    cout <<"Tipo de combustible: " << vehicle.getTcombustible() <<endl;
    cout <<"Anio de la fabricacion del coche: " << vehicle.getAnodefabriacion() <<endl;
    cout <<"Color del coche: " << vehicle.getColor()<<endl;
    cout << "Capacidad de motor: " << vehicle.getCapacidaddelmotor() <<endl;

    return 0;

}