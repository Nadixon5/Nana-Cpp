#include <iostream>
using namespace std;

enum item{
    pickaxe, ender_pearl, steak, flower
};

void useitem(item in_hand){
    if(in_hand==pickaxe) cout<<"Go mine some iron and coal slay.\n";
    else if(in_hand==ender_pearl) cout<<"Omg did you just kill an endermen????.\n";
    else if(in_hand==steak) cout<<"Mniammm tasty steak.\n";
    else cout<<"I picked a flower for you cuz I love you so much...\n";
}

int main(){
    item my_hand = pickaxe;
    useitem(my_hand);
    my_hand=steak;
    useitem(my_hand);
    my_hand=ender_pearl;
    useitem(my_hand);
    my_hand=flower;
    useitem(my_hand);
    return 0;
}