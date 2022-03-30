// https://www.codechef.com/START32D/problems/FINDSHOES

//Solution:

#include<bits/stdc++.h>
using namespace std;

//This code is developed by Vishesh JHa 

//This problem is so intresting to solve as I invest lots of effort and time to solve this problem and I am trying my best to become a good problem solver and codechef is very good platform where I can enchance my coding skills 

int main()
{
   int t;
   cin>>t;
   while(t--)
   {   
       int n,lef;
       cin>>n>>lef;

     
      
      if(lef==0)
        cout<<n*2<<endl;
    
        else if(n>lef)
        {
            int res=(n*2)-lef;
            cout<<res<<endl;
        }
        else if(lef>=n)
        {
            cout<<n<<endl;
        }




   }

    
return 0;
}
 

//This is my orginal content


