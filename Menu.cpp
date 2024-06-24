#include<iostream>
using namespace std;

void depositar(float);
void retirar(float);
void mostrarSaldo();

float saldo = 0; // Variable global

int main(){
    int op;
    float valor;
    do{
    cout<<"Cajero automatico"<<endl;
    cout<<"1. Depositar"<<endl;
    cout<<"2. Retirar"<<endl;
    cout<<"3. Mostrar saldo"<<endl;
    cout<<"0. salir"<<endl;
    cout<<"Elija una opción: ";
    cin>>op;
    switch(op){
        case 1:
        cout<<"Ingrese el monto a depositar: ";cin>>valor;
        depositar(valor);
        break;
    
        case 0:
            cout<<"Saliendo..."<<endl;
            //system("pause");
        break;
    }
    }
    return 0;
}
void depositar(float monto){
    saldo = saldo + monto;
}

void retirar(float monto){
    saldo = saldo + monto;
}

void mostrarSaldo(){
    cout<<"El saldo actual es: "<<saldo<<endl;
}