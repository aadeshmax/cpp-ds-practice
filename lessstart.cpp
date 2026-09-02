#include <iostream>
using namespace std ;
#include <string>
#include <iomanip>

int main() {
    int n ;
    cout<<"enter number of elements"<< "\n";
    cin >> n;
   
    int num [n];
    for ( int i=0;i<n;i++){
        int temp;
        cin>> temp;
        num[i]=temp;
    }
    int sum=0;
    for (int i:num){
        int c =0;
        if (i==1){
            continue;
        }

        for (int j=1;j<=i;j++ ){
            if (i%j==0){
                c=c+1;
    
        }
    }
    if(c==2){
        sum=sum+i;
    }

}
cout<<"the sum of prime numbers are :"<<sum;
}

 

