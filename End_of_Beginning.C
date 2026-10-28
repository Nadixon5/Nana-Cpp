#include <iostream>
using namespace std;

int main(){

    int tablica[6] = {6,7,8,9,10,11};
    cout<<sizeof(tablica)<<endl<<sizeof(int)<<endl<<endl;//cztery bajty, a bajt to 8 bitów
    int el_num = sizeof(tablica)/sizeof(int); 
    //ile zajmuje miejsca tablica? liczba elementów * rozmiar elementu

    for(int i = 0; i < el_num; ++i){
        //cout<<"ma nigg; "<<tablica[i]%2<<endl;
        if(tablica[i]%2 == 0){
            cout << tablica[i] << ": ayoo parzysta liczba maaan\n";
        }
        else cout << tablica[i] << ": nahhh bitch, parzysten't af\n";
    }
}