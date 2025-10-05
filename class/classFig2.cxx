#include <iostream>
using namespace std;

class Rectangle{

public:

    int x;
    int y;
    float width;
    float height;


    Rectangle(int input_x, int input_y, float input_width, float input_height){
        
        this->x = input_x;
        this->y = input_y;
        this->width = input_width;
        this->height = input_height;
    }

    // metoda, która wypisuje coś, nie zwraca nic slay
    void bah(){
        cout<<"hii aj em a metoda\n";
    }
    // metoda wypisujące wszystkie pola
    void mee(){
        cout<<"to jest iks: "<<x<<" to jest y: "<<y<<" to jest szerokość: "<<width<<", a to jest wysokość: "<<height<<endl;
    }
    // metoda wypisująca pole prostokąta
    void pole(){
        cout<<"pole wynosi: "<<width*height<<endl;
    }

    // metoda zwracająca obwód prostokąta
    float circumference(){
        return 2*width+2*height;
    }

};

int main(){
    
    Rectangle rect(5,7,8.5,11);
    // wywołanie metod klasy
    rect.bah();

    rect.mee();

    rect.pole();  
    
    cout<<"Obwód koła wynosi dupa pila, albo: "<<rect.circumference()<<endl;

    return 0;
}