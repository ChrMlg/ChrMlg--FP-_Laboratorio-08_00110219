#include <iostream>

using namespace std;

int main(){

    int mat[5][5] = {{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1}};
    for (int i = 0; i<5 ; i++){

        int mat[i][i]={0,0,0,0,0};
    }
 
    for (int i=0;i<5;i++){
        for (int j = 0 ; j < 5 ; j++){

            cout << mat[i][j]," ";

    }
    cout << endl;}
    return 0;
}