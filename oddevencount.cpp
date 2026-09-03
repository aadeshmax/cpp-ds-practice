#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Entre number of elements:";
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        int temp;
        cout<<"entre element "<<i+1<<" :";
        cin>>temp;
        ar[i]=temp;

    }
    int odd=0;
    int even=0;
    for(int i:ar){
        if (i%2==0)
            even++;
        else
            odd++;

    }
    cout<<"odd count : "<<odd<<"\n";
    cout<<"even count :"<<even;




}