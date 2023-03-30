#include <iostream>
#include "factura.h"
#include <string>
using namespace std;


int main() {
    Factura factura(" "," ",0,0,0,0);
    string c,d;
    int a,b;
    double e,f;
    cout<<"Digite el Numero de Pieza: "<<endl;
    cin>>c;
    factura.setPie(c);
    cout<<"Digite el nombre,descripcion: "<<endl;
    cin>>d;
    factura.setDesc(d);
    cout<<"Digite la cantidad correspondiente: "<<endl;
    cin>>a;
    factura.setCant(a);
    cout<<"Digite el precio correspondiente: "<<endl;
    cin>>b;
    factura.setPre(b);
    cout<<"Digite el Iva a consumir: "<<endl;
    cin>>e;
    factura.setIva(e);
    cout<<"Digite la oferta a realizar "<<endl;
    cin>>f;
    factura.setOfer(f);

    


    cout << "Datos de Factura: ";
    factura.displayDate();

    return 0;
}