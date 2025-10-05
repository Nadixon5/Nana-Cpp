#include <iostream>
using namespace std;

int main(){
    
    for (int i = 1; i<11; i++){
        cout<<"i == "<<i<<endl<<"j (po kolei) == ";
        for (int j = 1; j<11; j++){
            cout<<i*j<<" ";
        } 
        cout<<endl;
    }

    
    return 0;
}