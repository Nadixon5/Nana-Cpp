#include <iostream>
using namespace std;

int strong(int x){
    int silnia = 1;
    for (int j=x; j>1 ;j--){
        silnia *= j;
    }
    return silnia;
}

int main(){
    int number = 10;
    cout<<strong(number)<<endl;
    return 0;
}