#include <iostream>
using namespace std;

int whos_bigger(int a, int b){
    if (a>b) return a;
    else return b;
}

double whos_bigger(double a, double b){
    if (a>b) return a;
    else return b;
}

int main(){
    cout<<whos_bigger(3, 8)<<endl;
    cout<<whos_bigger(9.4, 6.7)<<endl;
    return 0;
}