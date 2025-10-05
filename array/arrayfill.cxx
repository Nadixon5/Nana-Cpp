#include <iostream>
using namespace std;

int main(){
    int array[13];
    for (int i=0;i<13;i++){
        array[i] = 1; //i to są tylko indeksy
        cout<<array[i]<<endl;
    }
    for (int i=0;i<13;i++){
        array[i] = i; //i to indeksy i wartości wpisywane do tablicy
        cout<<array[i]<<endl;
    }

    return 0;
}