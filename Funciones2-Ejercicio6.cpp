#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int seleccionUsuario;
    double seleccionComputadora;

    cout << "PIEDRA, PAPEL O TIJERA: \n\n";
    do {
        cout << "Selecciona una opción:\n1.- Piedra\n2.- Papel\n3.- Tijera\n";cin >> seleccionUsuario;

        switch (seleccionUsuario) {
            case 1:
                cout << "\n¡Has seleccionado Piedra!\n";
                break;
            case 2:
                cout << "\n¡Has seleccionado Papel!\n";
                break;
            case 3:
                cout << "\n¡Has seleccionado Tijeras!\n";
                break;
            default:
                cout << "\nSolo puedes seleccionar un número entre 1 y 3.\n\n";
                break;
        }
    } while (seleccionUsuario > 3 || seleccionUsuario < 1);

    // La computadora elige un número aleatorio entre 1 y 3
    srand(time(nullptr));
    seleccionComputadora = (rand() % 3) + 1;

    if (seleccionComputadora == 1)
        cout << "\n¡Tu ordenador ha seleccionado Piedra!\n";
    else if (seleccionComputadora == 2)
        cout << "\n¡Tu ordenador ha seleccionado Papel!\n";
    else if (seleccionComputadora == 3)
        cout << "\n¡Tu ordenador ha seleccionado Tijera!\n";

    // Determinamos al ganador
    if (seleccionUsuario == 2 && seleccionComputadora == 1)
        cout << "\n¡Ganaste!\n";
    else if (seleccionUsuario == 3 && seleccionComputadora == 2)
        cout << "\n¡Ganaste!\n";
    else if (seleccionUsuario == 1 && seleccionComputadora == 3)
        cout << "\n¡Ganaste!\n";
    else if (seleccionUsuario == seleccionComputadora)
        cout << "\n¡Empate!\n";
    else
        cout << "\n¡Perdiste!\n";

    return 0;
}
