#include <iostream>

using namespace std;

int main(){
    int cont=0;
    int j=8; // contador secundario
    string car;
    string arre[8];
    string arre2[8];
    string mat[5][9];
    cout << "Digite su carnet: ";cin>>car;cout<<endl;
    for (int i = 0 ; i < 8 ; i++){
        cont = cont +1;
        arre[i]=car[i];
    }
    int aux1=cont;
    mat [1][9]=aux1;
    int aux2=cont*2;
    mat [2][9]=aux2;
    int aux3=cont*3;
    mat[3][9]=aux3;
    int aux4=cont*4;
    mat[4][9]=aux4;

    for (int i = 0 ; i < 8 ; i++){
        j=j-1;
        arre2[i]=arre[j];
        cout<<arre2[i]<<" ";
    }
    for (int i = 0;i < 9;i++){
        
    }
    return 0;
}