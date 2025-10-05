#include <iostream>
using namespace std;

int main(){

    int wiek;
    cout<<"Podaj swój wiek: ";
    cin>>wiek;
    if (wiek<18) cout<<"fuuu dzieciak"<<endl;
    else if (wiek==18) cout<<"super gratki"<<endl;
    else cout<<"jesteś starą dupą"<<endl;
    // cout<<"Twój wiek wynosi: "<<wiek<<endl;
    return 0;
}