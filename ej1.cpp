#include <iostream>
using namespace std;

int main(){
    
    
        int arre[10]={1,2,3,4,5,6,7,8,9,10};
        int siz=sizeof(arre)/sizeof(arre[0]);
        
    
    for (int i = 0;i < siz; i++){

        if (arre[i++]%2!=0){
        cout << arre[i] <<endl;
        }
    }


return 0;


    
    

}