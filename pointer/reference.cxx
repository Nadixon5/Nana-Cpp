#include <iostream>
using namespace std;

void double_hunger(int& dupka){
    //dupka = dupka * 2;
    dupka*=2;
}

int main() {
    
    int hunger = 5;
    int& hunger_reference = hunger;

    cout<<hunger<<endl;
    cout<<hunger_reference<<endl;

    hunger++;
    cout<<hunger<<endl;
    cout<<hunger_reference<<endl;

    hunger_reference+=2;
    
    cout<<hunger<<endl;
    cout<<hunger_reference<<endl; 

    int hunger2 = 2;
    cout<<hunger2<<endl;
    double_hunger(hunger2);
    cout<<hunger2<<endl;

    return 0;
} 