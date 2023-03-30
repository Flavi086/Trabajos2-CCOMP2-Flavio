#include <string>
using namespace std;

class Factura {
    public:
        Factura(string n, string d, int c, int p, double i, double o) {
            pieza = n;
            desc = d;
            cant = c;
            pre = p;
            iva = i;
            ofer = o;
            
        }

        void setPie(string n) {
            pieza=n;
        }

        void setDesc(string d) {
            desc = d;
        }

        void setCant(int c) {
            cant = c;
        }

        void setPre(int p) {
            pre = p;
        }

        void setIva(double i) {
            iva = i;
        }

        void setOfer(double o) {
            ofer = o;
        }

        string getPie() {
            return pieza;
        }

        string getDesc() {
            return desc;
        }

        int getCant() {
            return cant;
        }

        int getPre() {
            return pre;
        }

        double getIva() {
            return iva;
        }

        double getOfer() {
            return ofer;
        }
       
        void displayDate() {
            float a,b,g;
            float price;
            a=cant*pre;
            b=(a*0.20)/100;
            g=(b*12)/100;
            price=(a+b)-g;
            cout<<"Monto a pagar: "<<price<<endl;
            cout <<"Numero de pieza: "<<pieza<<"/Descripcion: "<<desc<<"/Cantidad: "<<cant<<"/Precio: "<<pre<<"/IVA: "<<iva<<"Oferta: "<<ofer<<endl;
            
            
            
        }
    private:
        string pieza;
        string desc;
        int cant;
        int pre;
        double iva;
        double ofer;

};