#include <iostream>
using namespace std;

float force(float a, float m){
    // float F = a*m;
    return a*m;
}

int main(){
    float m;
    float a;
    cout<<"Hey handsome, I know you've been dying to know how the Newton's second law works. Let me help you with that hehe. First, tell me how heavy you are: \n";
    cin>>m;
    cout<<"Wow, you're heavy af... hihi just joking. Next, type in with what acceleration you would like to travel (pls not more than the speed of light, thx): \n";
    cin>>a;
    cout<<"Great! You are travelling with the net force equal to: "<<force(a,m)<<" N (kg*m/s^2)"<<endl;
    return 0;
}

