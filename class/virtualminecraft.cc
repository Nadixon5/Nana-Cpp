#include <iostream>
using namespace std; 

//klasa rodzinc menn
class Block{
public:
    // pozwala nadpisać metodę z klasy rodzica
    virtual void place_block(){
        cout<<"Block has been put down.\n";
    }
};

//klasas dziecko (dziedziczy po rodzicu (Block))
class Coal_Block : public Block{
public:
    void place_block(){
        cout<<"Thats my fav block!\n";
    }    
};

int main(){
    //działa tylko poprzec wskaźnik (to jest bez sensu (Szymon tak twierdzi))
    Block *coal = new Coal_Block();
    coal->place_block();
    return 0;
}