#include <iostream>
using namespace std;

int main(){
    int ba_array[8] = {3,6,7,8,9,2,5,7};
    int len = sizeof(ba_array) / sizeof(ba_array[0]);
    int even = 0;

    for(int i = 0; i<len; i++){
        if(ba_array[i]%2==0){//cout<<ba_array[i]<<", ";
           even++; 
        } 
    }

    cout<<even<<endl;

    return 0;
}