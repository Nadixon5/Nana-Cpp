#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float x;
    while (true){
        cout<<"Would you like me to calculate the logarithm of your chosen number, Sir?: \n";
        cin>>x;
        if (x==0){
            break;
        }
        cout<<log(x)<<endl;
    }
    return 0;
}