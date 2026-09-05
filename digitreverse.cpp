#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"enter no of elements :";
    cin>> n;
    int ar[n];
    int rar[n];
    int c=0;
    int x=0;
    for(int i= 0 ; i<n;i++){
        int temp ;
        cout<<"enter elemnt "<<i+1<<" ";
        cin>> temp;
        ar[i]=temp;
    }
    cout<<"--------------------------------------- \n";
    cout<<"reverse \n";
    for(int i : ar){
        
        
        if (i==0)
            cout<<0;
        while (i>0){
            c=i%10;
            cout<<c;
            i=i/10;
        }
    cout<<"\n";
    }
    cout<<"--------------------------------------- \n";
        
}