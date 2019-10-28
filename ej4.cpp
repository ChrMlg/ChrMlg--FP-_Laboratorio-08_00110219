#include <iostream>
#include <sstream>

using namespace std;

int main(){
    cout<<"tablas:"<<endl;

    int tabs[10][10];

    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            tabs [j][i]=(i+1)*(j+1);
        }
    }

    for(int j = 0; j < 10 ; j++){
        for(int i = 0 ; i < 10; i++){
            cout<<i+1<<"x"<<j+1<<"="<<tabs[j][i]<<"  ";
        }
        cout<<endl;
    }
return 0;
}