#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double cateto1, cateto2, hipotenusa;

    cout << "Cálculo de la hipotenusa de un Triángulo Rectángulo" <<endl;
    cout << "Introduzca el valor de un cateto: ";cin >> cateto1;
    cout << "Introduzca el valor del otro cateto: ";cin >> cateto2;

    hipotenusa = sqrt(cateto1 * cateto1 + cateto2 * cateto2);

    std::cout << "La hipotenusa es: " << hipotenusa << std::endl;

    return 0;
}
