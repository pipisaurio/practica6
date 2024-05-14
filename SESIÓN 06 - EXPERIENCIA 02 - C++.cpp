#include <iostream>

using namespace std;

class Circulo {
private:
    float radio;
    float diametro;

public:
    Circulo(float r) {
        radio = r;
        diametro = 2 * r;
    }

    float getRadio() {
        return radio;
    }
};

// Función amiga
float calcularArea(Circulo circulo) {
    return 3.14159 * circulo.getRadio() * circulo.getRadio();
}

int main() {
    char opc = 'S';
    while (opc == 'S' || opc == 's') {
        float radio;
        cout << "INGRESE EL RADIO DEL CÍRCULO: ";
        cin >> radio;
        Circulo circulo(radio);
        cout << "El área del círculo es: " << calcularArea(circulo) << endl;
        cout << "¿Desea continuar? S/N: ";
        cin >> opc;
    }
    return 0;
}
