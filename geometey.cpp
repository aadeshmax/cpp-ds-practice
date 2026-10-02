#include<iostream>
#include<cmath>
using namespace std;

void area(double radius ){
    double areas=pow(radius,2)*3.14;
    cout<<areas<<endl;
}
void area (double length , double breadth){
    double areas=length*breadth ;
    cout<<areas<<endl;

}
void area (double base , double height , bool triangle){
    double areas = 0.5*base *height;
    cout<<areas<<endl;
}
int main(){
    area(7.5);
    area(3.5 ,7.5);
    area (2.7,7,true);
    return 0;

}