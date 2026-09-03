#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cout<<"enter no of elements";
    cin>>n;
    int ar[n];
    for (int i=0; i<n ;i++){
        int temp;
        cout<<"enter element "<<i+1<<" : ";
        cin>>temp;
        ar[i]=temp;
    }
    cout<<"reversed order"<<"\n";
    for (int i=n-1;i>=0;i--){
        cout<<ar[i]<<"\t";
    }
}