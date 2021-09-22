#include<iostream>
#define PI 3.14
using namespace std;
int main()
{
    int option;
    double area, side,radius,length,breadth;
    cout<<"Press 1 for square\n 2 for circle\n 3 for rectangle \n";
    cin>>option;
    switch (option)
    {
    case 1: 
        cin>>side;
        area=side*side;
        break;
    case 2:
        cin>>radius;
        area=PI*radius*radius;
        break;
    case 3:
        cin>>length>>breadth;
        area=length*breadth;
        break;
    
    default:
        cout<<"Invalid Choice";
        break;
    }
    cout<<area;
    return 0;
}