#include <iostream>
using namespace std; 



void backwards(string input){
    int len = input.length();

    for(int i = len-1; i>=0 ; i--){
        cout<<input[i];
    }
    cout<<endl;
    //cout<<len<<endl;
} 

int main(){
    string input;
    cout<<"You have 5 seconds. Type in as many letters as possible and you will see magic!\n";
    cin>>input;
    backwards(input);
    return 0;
}