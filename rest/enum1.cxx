#include <iostream>
using namespace std;

enum trafficlight{
    green, orange, red
};

int main(){
    trafficlight color1 = green;
    color1 = orange;
    if (color1==orange) cout<<"The color is orange shit men.\n";
    color1 = red;
    if (color1==orange) cout<<"The color is orange shit men.\n";
    cout<<color1<<endl;
    return 0;
}