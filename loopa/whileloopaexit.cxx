#include <iostream>
using namespace std;

int main(){
    string odpowiedz;
    while (true){
        cout<<"Dupa, dupa, meow? :\n";
        cin>>odpowiedz;
        if (odpowiedz=="exit"){
            break;
        }
    }
    return 0;
}