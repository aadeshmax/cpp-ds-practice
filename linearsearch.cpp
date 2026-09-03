#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    vector<int> array;
    int targate ;
    cout<<"enter number of elements in array :";
    cin>>n;
    for (int i=0; i<n;i++){
        int temp;
        cout<<"enter element "<<i;
        cin>>temp;
        array.push_back(temp);

    }
    cout<<"enter num to search:";
    cin>>targate;
    if(ranges::contains(array,targate)){
        cout<<targate<<" is present in there";

    }
    else
        cout<<"not found";


    return 0;
}