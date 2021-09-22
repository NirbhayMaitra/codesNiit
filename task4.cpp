#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string name;
    float basePay,salary;
    int time;
    cout<<"Enter name of the employee\n";
    cin>>name;
    cout<<"Enter base pay of the employee\n";
    cin>>basePay;
    cout<<"Enter number of hours worked by the employee\n";
    cin>>time;

    cout<<"Name:: "<<name<<endl;
    cout<<"Base Pay:: "<<basePay<<endl;
    cout<<"Hours Worked:: "<<time<<endl;
    if (basePay==12)
    {
         if(time>40)
    {
        salary=(basePay*40)+((time-40)*(basePay*2));
    }
    else
    {
        salary=basePay*time;
    }
    }
    else{
        salary=0;
    }
   
    cout<<"Salary:: "<<salary<<endl;
    return 0;
}