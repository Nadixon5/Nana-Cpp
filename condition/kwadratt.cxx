#include <iostream>
using namespace std;

int main(){
    double a, b, c, d;
    cout<<"Słuchaj, podaj mi teraz po kolei wartości boków twojego prostokąta, a my sprawdzimy, czy faktycznie jest prostokątem czy może jednak kwadratem muhahahhahaha\n";
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    if (a==b && b==c && c==d) cout<<"This mf is a kwadrat hehe\n";
    else cout<<"This mf is not a kwadrat beeeee\n";

    if ((a==c && b==d) || (a==b && c==d) || (b==c && d==a)) cout<<"This mf is a prostokąt hehe\n";
    else cout<<"This mf is not a prostokąt muuuu\n";

    return 0;
}