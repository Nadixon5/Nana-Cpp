#include <iostream>
using namespace std; 

class Pickaxe{
public:
    int durability, efficency_level, fortune_level, unbreaking_level;

    Pickaxe(int dur_input, int eff_input, int for_input, int unb_input){
        durability = dur_input;
        efficency_level = eff_input;
        fortune_level = for_input;
        unbreaking_level = unb_input;
    }

    //przeciążenie operatora + (to umożliwia dodawanie dwóch instancji naszej klasy)
    Pickaxe operator+(const Pickaxe other_pick){

        //tworzymy zmienną output_dur, która jest sumą wartości pierwszego picka i drugiego
        int output_dur = durability + other_pick.durability;
        if(output_dur > 100) output_dur=100;

        int output_eff;
        if(efficency_level == other_pick.efficency_level && efficency_level<5) output_eff = efficency_level+1;
        //dla przypadku gdy eff_level są równe ale nie spełniają drugiego warunku u góry, czyli są równe 5
        else if(efficency_level == other_pick.efficency_level) output_eff = efficency_level;
        else if(efficency_level > other_pick.efficency_level) output_eff = efficency_level;
        else output_eff = other_pick.efficency_level;

        int output_fort;
        if(fortune_level == other_pick.fortune_level && fortune_level<3) output_fort = fortune_level+1;
        else if(fortune_level == other_pick.fortune_level) output_fort = fortune_level;
        else if(fortune_level > other_pick.fortune_level) output_fort = fortune_level;
        else output_fort = other_pick.fortune_level;

        int output_unb;
        if(unbreaking_level == other_pick.unbreaking_level && unbreaking_level<4) output_unb = unbreaking_level+1;
        else if(unbreaking_level == other_pick.unbreaking_level) output_unb = unbreaking_level;
        else if(unbreaking_level > other_pick.unbreaking_level) output_unb = unbreaking_level;
        else output_unb = other_pick.unbreaking_level;

        //tworzymy trzeci pickaxe poprzez użycie konstruktora i zwracamy go, bo to nie jest void
        Pickaxe output_pick(output_dur, output_eff, output_fort, output_unb);
        return output_pick;
    }

};


int main(){
    //tworzymy zmienne typu Pickaxe i znowu poprzez konstruktor wpisujemy wartości 
    Pickaxe pick1(90, 5, 1, 3);
    Pickaxe pick2(30, 5, 1, 4);
    Pickaxe pick3 = pick1 + pick2;
    //odwołujemy się do pól klasy
    cout<<"Your pickaxe has these stats:\n"<<"Durability: "<<pick3.durability<<", Efficiency: "<<pick3.efficency_level<<", Fortune: "<<pick3.fortune_level<<", Unbreaking: "<<pick3.unbreaking_level<<endl;
    return 0;
}