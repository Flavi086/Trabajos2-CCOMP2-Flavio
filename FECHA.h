using namespace std;

class Fecha {
    public:
        Fecha(int m, int d, int a) {
            mes = (m >= 1 && m <= 12) ? m : 1;
            dia = d;
            año = a;
        }

        void setMes(int m) {
            mes = (m >= 1 && m <= 12) ? m : 1;
        }

        void setDia(int d) {
            dia = d;
        }

        void setAño(int a) {
            año = a;
        }

        int getMes() {
            return mes;
        }

        int getDia() {
            return dia;
        }

        int getAño() {
            return año;
        }

        void displayDate() {
            cout << mes << "/" << dia << "/" << año << endl;
        }
    private:
        int mes;
        int dia;
        int año;
};