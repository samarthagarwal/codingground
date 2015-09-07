#include <iostream>

using namespace std;

int main()
{
    int salary;
    float LOW_TAX = 0.05;
    float MED_TAX = 0.10;
    float HIG_TAX = 0.15;
    
    cout<<"Enter Salary:"; cin>>salary;
    if(salary<20000)
        cout<<"Salary: $"<<salary<<"\nTax: $"<<(salary*LOW_TAX)<<"\n";
    else if(salary>=20000 && salary<50000)
        cout<<"Salary: $"<<salary<<"\nTax: $"<<(salary*MED_TAX)<<"\n";
    else if(salary>=50000)
        cout<<"Salary: $"<<salary<<"\nTax: $"<<(salary*HIG_TAX)<<"\n";
}