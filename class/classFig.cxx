#include <iostream>
using namespace std;

class Rectangle{

public:
// pola klasy
    int x;
    int y;
    float width;
    float height;

// konstruktor
    Rectangle(int input_x, int input_y, float input_width, float input_height){
        // przepisanie argumentów konstruktora do pól
        this->x = input_x;
        this->y = input_y;
        this->width = input_width;
        this->height = input_height;
    }
};

int main(){
    // instancja klasy Rectangle
    Rectangle rect(5,7,8.5,11);
    
    cout<<"to jest iks: "<<rect.x<<", a to jest igrek: "<<rect.y<<endl;
    cout<<"to jest szerokość prostokąta: "<<rect.width<<", a to jest jego wysokość: "<<rect.height<<endl;
    // przypisanie nowych wartości polom klasy Rectangle
    rect.x=4;
    rect.y=6;
    rect.width=8;
    rect.height=10;

    cout<<"to jest iks: "<<rect.x<<", a to jest igrek: "<<rect.y<<endl;
    cout<<"to jest szerokość prostokąta: "<<rect.width<<", a to jest jego wysokość: "<<rect.height<<endl;

    return 0;
}