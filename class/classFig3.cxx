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

    void bah(){
        cout<<"hii aj em a metoda\n";
    }
 
    void mee(){
        cout<<"to jest iks: "<<x<<" to jest y: "<<y<<" to jest szerokość: "<<width<<", a to jest wysokość: "<<height<<endl;
    }

    void pole(){
        cout<<"pole wynosi: "<<width*height<<endl;
    }

    float circumference(){
        return 2*width+2*height;
    }


    // metoda ustawiająca wartości
    void set_xy(int input_x, int input_y){
        x = input_x;
        y = input_y;
    }

    void set_all(int input_x, int input_y, float input_height, float input_width){
        x = input_x;
        y = input_y;
        width = input_width;
        height = input_height;
    }

};

int main(){
    
    Rectangle rect(5, 7, 8.5, 11);

    rect.bah();

    rect.mee();

    rect.pole();  

    rect.set_xy(1, 2);

    cout<<"To jest x: "<<rect.x<<", a to jest y: "<<rect.y<<endl;

    rect.set_all(5, 5, 3.3, 6.6);

    cout<<"nie chce mi się już: "<<rect.x<<" "<<rect.y<<" "<<rect.height<<" "<<rect.width<<endl;
    
    cout<<"Obwód koła wynosi dupa pila, albo: "<<rect.circumference()<<endl;

    return 0;
}                                                               