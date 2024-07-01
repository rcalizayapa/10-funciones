#include <iostream>
#include <cmath>
using namespace std;

void calcularRaices(float A, float B, float C) {
    float discriminante = B * B - 4 * A * C;
    float raiz1, raiz2;

    if (discriminante < 0) {
        cout << "La ecuación no tiene solución real." << endl;
    } else {
        raiz1 = (-B + sqrt(discriminante)) / (2 * A);
        raiz2 = (-B - sqrt(discriminante)) / (2 * A);

        cout << "El primer resultado es: " << raiz1 << endl;
        cout << "El segundo resultado es: " << raiz2 << endl;
    }
}

int main() {
    float A, B, C;

    cout << "Introduzca el valor de a: "; cin >> A;
    cout << "Introduzca el valor de b: "; cin >> B;
    cout << "Introduzca el valor de c: "; cin >> C;

    calcularRaices(A, B, C);

    return 0;
}
