#include <iostream>
using namespace std;

int add(int a, int b){
    return a+b;
}
float add(float a, float b){
    return a+b;
}

double add(double a, double b){
    return a+b;
}

string add(string a, string b){
    return a+b;
}

int main(){
    int a = 2;
    int b = 4;
    float aa = 3;
    float bb = 6;
    double aaa = 8;
    double bbb = 1;
    string ba = "mimi9";
    string ab = "6mimi";

    cout<<add(a,b)<<endl;
    cout<<add(aa,bb)<<endl;
    cout<<add(aaa,bbb)<<endl;
    cout<<add(ba,ab)<<endl;

    return 0;
}