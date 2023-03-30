#include <iostream>
#include "FECHA.h"
using namespace std;


int main() {
    Fecha fecha(3, 29, 2023);

    cout << "Fecha inicial: ";
    fecha.displayDate();
    int x,y,z;
    cout<<"Digite el mes correspondiente: "<<endl;
    cin>>x;
    fecha.setMes(x);
    cout<<"Digite el día correspondiente: "<<endl;
    cin>>y;
    fecha.setDia(y);
    cout<<"Digite el ano correspondiente: "<<endl;
    cin>>z;
    fecha.setAno(z);

    cout << "Fecha modificada: ";
    fecha.displayDate();

    return 0;
}