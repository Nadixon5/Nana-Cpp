#include <iostream>
using namespace std;

enum roman_num {i,ii,iii,iv,v,vi,vii,viii,ix,x};

void check_numeral(roman_num number){
    switch(number){
        case i:
            cout<<"This is one in roman.\n";
            break;
        case ii:
            cout<<"This is two in roman.\n";
            break;
        case iii:
            cout<<"This is three in roman.\n";
            break;
        case iv:
            cout<<"This is four in roman.\n";
            break;
        case v:
            cout<<"This is five in roman.\n";
            break;
        case vi:
            cout<<"This is six in roman.\n";
            break;
        case vii:
            cout<<"This is seven in roman.\n";
            break;
        case viii:
            cout<<"This is eight in roman.\n";
            break;
        case ix:
            cout<<"This is nine in roman.\n";
            break;
        case x:
            cout<<"This is ten in roman.\n";
            break;
        
    }
}

int main(){
    roman_num number = ix;
    check_numeral(number);
    number = v;
    check_numeral(number);
    number = ii;
    check_numeral(number);
    number = viii;
    check_numeral(number);

    return 0;
}

