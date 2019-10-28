#include <iostream>
#include <cstdlib>  //pseudo generador de numeros aleatorios
#include <ctime>    // libreria que ayuda a generar numeros aleatorios en secuencias diferentes
using namespace std;

int main(){   

    srand((int)time(0));

    int arre[10];
    for (int i = 0 ; i < 10; i++){
        arre [i]=(rand() % 10) + 1;
    }

    int siz=sizeof(arre)/sizeof(arre[0]);

    cout << "Los numeros pares dentro del arreglo aleatorio son: " << endl;
    for (int i = 0;i < siz; i++){
        if (arre[i]%2==0){
        cout << arre[i]<<" ";
        }
    }
    return 0;
}