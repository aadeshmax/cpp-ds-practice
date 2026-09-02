#include <iostream>
#include<iomanip>
#include<string>
using namespace std;
int main() {
    int n ;
    cout<<"Enter num of elements in array :";
    cin>>n;
    int array[n]={};
    for (int i=0; i<n;i++){
        int temp ;
        cout<<"enter element : ";
        cin >> temp;
        array[i]=temp;


    }
    int max=array[0] ;
    int min =array[0];
    for (int i:array){
        if (i> max)
            max=i;
        if (i<min)
            min=i;
    }
    cout<<"max:"<<max<<"\n"<<"min:"<<min;


    return 0;
}