#include <iostream>
#include <string> 
using namespace std;

int main(){

    string nombres[5]={};

    for (int i = 0;i<5;i++){

        
        cin >> nombres[i];
        
    }

    for (int j = 0;j<5;j++){
        cout << (nombres[j]) << endl;
        cout << (nombres[j]).size() << endl;
    }
}