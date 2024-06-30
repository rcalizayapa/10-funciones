#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int numero;
    cout<<"Ingrese un numero: ";cin>>numero;
    
    cout<<"Valor absoluto: "<<fabs(numero)<<endl;
    cout<<"Raiz cuadrada: "<<sqrt(numero)<<endl;
    cout<<"Potencia (n^2): "<<pow(numero, 2)<<endl;
    cout<<"Redondeo al entero mas cercano: "<<round(numero)<<endl;
    cout<<"Redondeo hacia arriba: "<<ceil(numero)<<endl;
    cout<<"Redondeo hacia abajo: "<<floor(numero)<<endl;
    cout<<"Seno: "<<sin(numero)<<endl;
    cout<<"Coseno: "<<cos(numero)<<endl;
    cout<<"Tangente: "<<tan(numero)<<endl;

    return 0;
}
