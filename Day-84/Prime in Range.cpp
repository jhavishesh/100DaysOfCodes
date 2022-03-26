//Solution:

#include <iostream>
using namespace std;

void PrimeInRange(int st,int en)
{   
   int flag;
   for(int i=st;i<=en;i++)
   {    
       flag=0;
        for(int j=2;j*j<=i;j++)
        {
            if(i%j==0)
            {   
                flag=1;
                break;
            }
        }
        if(flag==0 && i!=1)
            cout<<i<<" ";
    }
    
    
}
int main() {
    int st,en;
    cin>>st;
    cin>>en;
    PrimeInRange(st,en);
    return 0;
}
