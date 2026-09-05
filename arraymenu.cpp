#include<iostream>
using namespace std ;

int main(){
    int n ;
    cout<<"entre number of elements :";
    cin>>n;
    int ar[n];
    for (int i=0;i<n;i++){
        int temp ;
        cout<<"enter element  "<<i+1<<":";
        cin>>temp;
        ar[i]=temp;
        
    }
    cout<<"--------------------------------------- \n";
    do{
        int ch ;
        cout<<"1-show maximum element\n"<<"2-Print minimum element\n"<<"3-- Count total odd numbers \n"<<"4--Exit \n"<<"enter ur choice---: ";
        cin>>ch;
        int min=ar[0];
        int max=ar[0];
        int odd=0;
        if ( ch==1){
            for (int i=0;i<n;i++){
                if (ar[i]>max)
                    max=ar[i];
            }
            cout<<"--------------------------------------- \n";
            cout<<"the maxium element is ; "<<max<<"\n";
            cout<<"--------------------------------------- \n";
        }
        
        else if (ch==2)
        {
            for (int j=0;j<n;j++){
                if (ar[j]<min)
                    min=ar[j];
            }
            cout<<"--------------------------------------- \n";
            cout<<"the minimumelement is ; "<<min<<"\n";
            cout<<"--------------------------------------- \n";
        }
        else if (ch==3)
        {
            
            for (int j=0;j<n;j++){
                if(ar[j]%2!=0)
                    odd++;} 
            cout<<"--------------------------------------- \n";
            cout<<"odd count :"<<odd<<"\n";
            cout<<"--------------------------------------- \n";    
                   }
        else if (ch==4)
        {
            break;
        }
        else{
             cout<<"--------------------------------------- \n";
            cout<<"enter a valid choice \n";
            cout<<"--------------------------------------- \n";
        }




    }while (true);
    
    
}