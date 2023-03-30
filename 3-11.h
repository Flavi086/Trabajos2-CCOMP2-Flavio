
#include <string>

class Motor {
private:
    std :: string marca;
    std :: string tipodecombustible;
    int anodefabricacion;
    std :: string color;
    int capacidaddemotor; 
public :
    Motor(std:: string marca, std:: string tipodecombustible, int anodefabricacion, std :: string color, int capacidaddemotor  )
        :marca(marca), tipodecombustible(tipodecombustible), anodefabricacion(anodefabricacion), color(color), capacidaddemotor(capacidaddemotor) {}

    void setMarca (std :: string marca) {
        marca = marca;
    }

    std :: string getMarca() const {
        return marca;
    }

    void setTCombustible (std :: string tipodecombustible){
        tipodecombustible = tipodecombustible;

    }

    std :: string getTcombustible() const {
        return tipodecombustible;
    }

    void setAnodefabricacion (int anodefabricacion) {
        anodefabricacion = anodefabricacion;
    }

    int getAnodefabriacion () const {
        return anodefabricacion;
    }

    void setColor (std:: string color) {
        color = color;
    }

    std :: string getColor() const {
        return color;
    }

    void setCapacidaddelmotor (int capacidaddemotor) {
        capacidaddemotor = capacidaddemotor;
    }

    int getCapacidaddelmotor () const {
        return capacidaddemotor;
    }


};