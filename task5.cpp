#include<iostream>
using namespace std;

    int doubling(int n) 
    {
        if (n == 0)
         {
        return 0;
    } 
        else
     {
        int lastDigit = n % 10;
        return 100 * doubling(n / 10) + 10 * lastDigit + lastDigit;
    }
}

int main()
{
    int num;
    cout<<"Enter the number";
    cin>>num;
    int a=doubling(num);
    cout<<a;

}