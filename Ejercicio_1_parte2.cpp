#include <iostream>
#include <cmath> // Incluimos la biblioteca cmath para usar la función pow y M_PI

using namespace std;

// Función para calcular el área de un círculo
double calcularAreaCirculo(double radio) {
    return M_PI * pow(radio, 2);
}
//Programa principal
int main() {
    double radio;
    cout << "Ingresa el radio del cíirculo: ";
    cin >> radio;

    double area = calcularAreaCirculo(radio);

    cout << "El área del circulo con radio " << radio << " es: "<<area<<endl;

    return 0;
}
