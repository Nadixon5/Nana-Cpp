#include <iostream>
using namespace std;

int main(){
    int sypialnia = 82;
    cout<<"Wartość sypialni: "<<sypialnia<<endl; 
    cout<<"Adres sypialni: "<<&sypialnia<<endl; 

    //utworzenie pointera przechowującego adres sypialni
    int* sypialnia_pointer = &sypialnia;
    //wskaźnik przechowuje adres, więc jak wypiszemy wskaźnik to pokaże nam sie adres
    cout<<"Wskaźnik sypialni wynosi: "<<sypialnia_pointer<<endl; 
    cout<<"Wartość sypialni przez wskaźnik: "<<*sypialnia_pointer<<endl; //odczytuje co jest pod tym adresem!
    return 0;
}