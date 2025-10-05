#include <iostream>
using namespace std;

bool is_triangle(int a, int b, int c){
    if (a+b>c && b+c>a && a+c>b) return true;
    else return false;
}

int main(){
    
    int a = 800;
    int b = 3;
    int c = 4;

    if (is_triangle(a,b,c)) cout<<"You can have a trójkąt :)\n";
    else cout<<"No trójkąt for you...\n";

    return 0;

}