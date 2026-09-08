#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter grade : ";
    cin>> n;
    switch(n/10){
        case 10 :
        case 9 :
            cout<<"grade A";
            break;
        case 8:
            cout<<"Grade B";
            break;
        case 7 :
            cout<<"Grade c";
            break;
        case 6:
            cout<<"Grade D";
            break;
        default:
            cout<<"garde F";
            break;


    }

} 