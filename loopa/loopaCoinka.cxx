#include <iostream>
using namespace std;
int main(){

    //główna coinka - 4 piramidy
    for(int i = 2 ; i<6 ; i++){
        // cout<<"piramida"<<endl;
            
        // podział na linijki
        for(int j = 4; j>=5-i ; j--){
            cout<<endl;
            for(int k = j-1; k>=0; k--){
                cout<<" ";
            }
            cout<<"*";
            for(int l = 0; l<=3-j; l++){
                cout<<"**";
            }
        }
        
    }
    cout<<endl;

    return 0;
}