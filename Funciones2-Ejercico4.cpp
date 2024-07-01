#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float A, B, C;
    float discriminante;
    float raiz1, raiz2;

    cout << "Introduzca el valor de a: ";cin >> A;
    cout << "Introduzca el valor de b: ";cin >> B;
    cout << "Introduzca el valor de c: ";cin >> C;

    discriminante = B * B - 4 * A * C;

    if (discriminante < 0) {
        cout << "La ecuación no tiene solución real." << endl;
    } else {
        raiz1 = (-B + sqrt(discriminante)) / (2 * A);
        raiz2 = (-B - sqrt(discriminante)) / (2 * A);

        cout << "El primer resultado es: " << raiz1 << endl;
        cout << "El segundo resultado es: " << raiz2 << endl;
    }

    return 0;
}
