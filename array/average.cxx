#include <iostream>
using namespace std;

int main(){
    int array[6] = {4,67,911,5,21,37};
    int sum = 0;
    float ave;
    for (int i=0;i<6;i++){
        sum += array[i];
        
    }
    cout<<sum<<endl; //suma 

    ave = sum/6;
    cout<<ave<<endl; //średnia
    return 0;
}