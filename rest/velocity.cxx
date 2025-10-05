#include <iostream>
using namespace std;

int main(){
    float time;
    float distance;
    float velocity;
    string answer;
    cout<<"Do you want to know how fucking fast you are?: ";
    cin>>answer;
    if (answer=="yes") cout<<"Okay, cool. Give me please your time: ";
    else {
        cout<<"Fuck you, go fuck urself."<<endl;
        return 0;
    }
    cin>>time;
    cout<<endl<<"Great, now ur distance: ";
    cin>>distance;
    velocity = distance/time;
    cout<<endl<<"Your velocity is: "<<velocity<<"\nYou are so fucking fast man :)\n";
    
    return 0;
}