#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){
    srand(time(0));
    int cantidad, maximo;
    cout<<"Ingrese la cantidad de numeros aleatorios: ";cin>>cantidad;
    
    cout<<"Ingrese el maximo volor de los numeros: ";cin>>maximo;
    cout<<"Numeros aleatorios generados: "<<endl;
    for(int i=0; i<cantidad; i++){
        int numal=rand()%maximo+1;
        cout<<numal<<" "<<endl;
    }
    return 0;
}