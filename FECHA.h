using namespace std;

class Fecha {
    public:
        Fecha(int m, int d, int a) {
            mes = (m >= 1 && m <= 12) ? m : 1;
            dia = d;
            ano = a;
        }

        void setMes(int m) {
            mes = (m >= 1 && m <= 12) ? m : 1;
        }

        void setDia(int d) {
            dia = d;
        }

        void setAno(int a) {
            ano = a;
        }

        int getMes() {
            return mes;
        }

        int getDia() {
            return dia;
        }

        int getAno() {
            return ano;
        }

        void displayDate() {
            cout << mes << "/" << dia << "/" << ano << endl;
        }
    private:
        int mes;
        int dia;
        int ano;
};