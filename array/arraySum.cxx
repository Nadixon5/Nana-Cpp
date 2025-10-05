#include <iostream>
using namespace std;

int main(){
    int nums_array[6] = {3,57,124,9,90,2};
    int sum = 0;
    int len = sizeof(nums_array) / sizeof(nums_array[0]);
    cout<<sizeof(nums_array)<<endl<<sizeof(nums_array[0])<<endl;
    cout<<sizeof(nums_array) / sizeof(nums_array[0])<<endl;

    for(int i = len-1; i>=0 ; i--){
        sum += nums_array[i];
    }
    cout<<sum<<endl;
    return 0;
}