#include <iostream>
using namespace std;

int main(){
    for (int i=0; i<24; i++){
        
        for (int j=0; j<60; j++){
            
            if (j<10){
                cout<<i<<":"<<0<<j<<endl;
            }
            else cout<<i<<":"<<j<<endl;
        }
        
    }
    return 0;
}