#include <iostream>
using namespace std;

int main(){
    int x;
    int array[99];
    int i = 0;
    float suma = 0;
    float ave;
    while (i<99){
        cout<<"Gimme gimme gimme a number pleeeeaaaasee: \n";
        cin>>x;
        if (x==0){
            break;
        }
        array[i]=x;
        i++;
    }
    cout<<"Slay slay bye bye nigg-\n";
    // cout<<i<<endl;
    //i--;
    for (int j=i-1;j>-1;j--){
        suma += array[j];
    }
    // cout<<suma<<endl;

    ave=suma / i;

    cout<<"Twoja średnia wynosi: "<<ave<<endl;

    return 0;
}