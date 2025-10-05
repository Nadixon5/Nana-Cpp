#include <iostream>
using namespace std;

int main(){
    int ba_array[8] = {3,1,7,8,0,2,-300,7};
    int len = sizeof(ba_array) / sizeof(ba_array[0]);
    int min = ba_array[0];

    for(int i = 1; i<len; i++){
        if(ba_array[i]<min) min=ba_array[i];
    }
    cout<<min<<endl;    

    return 0;
}