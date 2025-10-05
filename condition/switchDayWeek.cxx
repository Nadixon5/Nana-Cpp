#include <iostream>
using namespace std;

int main(){
    int day;

    cout<<"Choose a number from 1 to 7: ";
    cin>>day;
    //działa jak if, tylko gorzej hah
    //if day..
    switch(day){
        //== 1
        case 1:
            cout<<"It's monday! Have a nice day :)\n";
            //dont check other cases
            break;
        case 2:
            cout<<"It's tuesday. Good luck.\n";
            break;
        case 3:
            cout<<"It's apparently wednesday...\n";
            break;
        case 4:
            cout<<"It's thursday. I wanna go home :(\n";
            break;
        case 5:
            cout<<"It's friday!!! Yayyy finally.\n";
            break;
        case 6:
            cout<<"It's saturday :D Have a good rest.\n";
            break;
        case 7:
            cout<<"It's sunday. Go to church.\n";
            break;
        //if non of the cases are chosen (the user is dumb)
        default:
            cout<<"You have clearly problems with reading. I said, choose a number from 1 to 7...\n";
    }

    return 0;
}