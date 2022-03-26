//Solution:

#include<iostream>
using namespace std;
int main()
{
    int a,b,x,y,gcd,lcm;
    cin>>a;
    cin>>b;
    x=a;//for saving org value
    y=b;
    while(a!=b)
    {
        if(a>b)
        a=a-b;
        else
        b=b-a;
    }
    cout<<"GCD of HCF is "<<a<<endl;
    gcd=a;
    lcm=(x*y)/gcd;
    cout<<"LCM is "<<lcm;
return 0;
}


