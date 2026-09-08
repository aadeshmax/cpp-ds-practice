#include<iostream>
using namespace std;
int main (){
    int n ;
    cout<<"enter number of digits to be :";
    cin>>n;
    int ar[n];
    int arr[n];
    int count =0;
    for(int i=0;i<n;i++){
        int temp;
        cout<<"enter element : "<<i+1<<" ";
        cin>>temp;
        ar[i]=temp;


    }
    cout<<"--------------------------------------------\n";
    int targate ;
    cout<<"--------------------------------------------\n";
    cout<<"enter targate to find : ";
    cin>> targate;
    cout<<"--------------------------------------------\n";
    
    for (int i =0;i<n;i++){
        if(ar[i]==targate){
            arr[count]=i;
            count++;
           
            
        }}
    if(count==0){
        cout<<"--------------------------------------------\n";
        cout<<"notfound \n";
        cout<<"--------------------------------------------\n";
    }
    else{
        cout<<"--------------------------------------------\n";
        cout<<"Targate count : "<<count<<"\n";
         cout<<"Found at indicies : ";
        for(int i=0;i<count;i++){
           cout<<arr[i]<<"\t";
        }

    }
    


}