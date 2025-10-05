#include <iostream>
using namespace std;

int main(){
    string day;
    cout<<"What day is today?: "<<endl;
    cin>>day;
    if (day=="monday" || day=="tuesday" || day=="wednesday" || day=="thursday" || day=="friday"){
        cout<<"Congrats man, not weekend shit."<<endl;
    }
    else if (day=="saturday" || day=="sunday"){
        cout<<"Woooooow holy fuck, it's the weekend!"<<endl;
    }
    else cout<<"You stupid dickhead, this is not a day of the week..."<<endl;
    return 0;
}