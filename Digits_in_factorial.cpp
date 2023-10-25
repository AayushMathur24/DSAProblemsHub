#include <iostream>
#include <cmath>
using namespace std;
int func(int n)
{
    double dig =1;
    for(int i=2;i<=n;i++)
        dig+= log10(i);
    return dig;
}

int main()
{
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    cout<<"Number of digits in factorial of "<<num<<" = "<<func(num);
    return 0;
}
