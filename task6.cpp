#include<iostream>
using namespace std;
int main()
{
    int ph;
    cin>>ph;
    if(ph<7)
    {
        cout<<"pH value is low, partial water change require"<<endl;
    }
    else if(ph==7|| ph==8)
    {
        cout<<"ph value is fine"<<endl;
    }
    else
    {
        cout<<"pH value is high, partial water change required";
    }
}