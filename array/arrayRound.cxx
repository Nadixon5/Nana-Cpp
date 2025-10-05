#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float mi_array[3] = {3.6 , 7.9 , 2.1};
    int len = 3;

    for(int i = 0; i<len; i++){
        cout<<round(mi_array[i]);
        if(i<2) cout<<", ";
        else cout<<".";
    }
    cout<<endl;
    for(int j = 0; j<len; j++){
        cout<<ceil(mi_array[j]);
        if(j<2) cout<<", ";
        else cout<<".";
    }
    cout<<endl;
    for(int k = 0; k<len; k++){
        cout<<floor(mi_array[k]);
        if(k<2) cout<<", ";
        else cout<<".";
    }
    cout<<endl;
    return 0;
}