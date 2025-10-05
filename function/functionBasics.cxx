#include <iostream>
#include <math.h>
using namespace std;

void dupcia(){
    cout<<"omg kitty haiiiiii!!!!!\n";
}


float pole_kola(float r){
    float pole = M_PI*r*r;
    return pole;
}

bool i_seven(int x){
    if (x%2==0) return true;
    else return false; 
}

int main(){
    // dupcia();
    // cout<<pole_kola(5)<<endl;
    int x = 6;
    // cout<<i_seven(x)<<endl;
    // cout<<(5<6)<<endl;

    if (i_seven(x)) cout<<"Parzyste shit men.\n";
    else cout<<"Not mimi...\n";

    return 0;
}

