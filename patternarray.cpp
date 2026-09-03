#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main(){
    int n ;
    cout<<"enter number rows";
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        int temp;
        cout<<"enter no :";
        cin>> temp;
        array[i]=temp;

        
    }
    cout << "\n--- Bar Chart ---\n";
    
    for (int i:array){
        cout<< string(i,'*')<<"\n";
    }
}