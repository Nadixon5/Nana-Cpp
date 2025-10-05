#include <iostream>
using namespace std;

int main(){
    int N;
    cout<<"Siema, podaj mi losową liczbę ty piękny człowieku: ";
    cin>>N;
    int i = 1;
    while (true){
        if (i>N){
            cout<<"Koniec pentli mf\n";
            break;
        }
        cout<<i<<endl;
        i++;
    }   
    return 0;
}