#include <iostream>

using namespace std;

int main(){
    int j=8; // contador secundario
    string car;
    string arre[8];
    cout << "Digite su carnet: ";cin>>car;cout<<endl;
    for (int i = 0 ; i < 8 ; i++){
        arre[i]=car[i];
    }

    for (int i = 0 ; i < 8 ; i++){
        j=j-1;
        cout<<arre[j]<<" ";
    }
}