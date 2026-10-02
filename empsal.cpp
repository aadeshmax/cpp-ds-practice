#include<iostream>
using namespace std;
#include<string>
struct emp
{
    int id;
    string name;
    int bsal;
    double bon;
};
void bons(emp &employee, double bonus ){
    employee.bon=employee.bsal*(bonus/100);
}

int main() {
    emp e1;
    e1.id=101;
    e1.name="aadesh";
    e1.bsal=250000;
    e1.bon=0;
    bons(e1,25);
    cout << "Employee ID: " << e1.id << endl;
    cout << "Name: " << e1.name << endl;
    cout << "Basic Salary: $" << e1.bsal << endl;
    cout << "Calculated Bonus: $" << e1.bon << endl;
    cout<<"final salary : $"<<e1.bsal+e1.bon;

    return 0;
    

}
