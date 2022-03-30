//https://www.codechef.com/START32D/problems/TRAINPLN

//Solution:


#include<bits/stdc++.h>
//This code is developed by Vishesh JHa 
using namespace std;
#define fun(i,a,b) for(long long i=a;i<b;i++)
#define kog(i,a,b) for(long long i=a;i>=b;i--)
#define ll long long
//I am trying my best to become a good problem solver and codechef is very good platform where I can enchance my coding skills 
#define pb push_back
//This code is developed by Vishesh JHa 
#define vll vector<long long>
#define vc vector
#define fi first
//This code is developed by Vishesh JHa 
#define se second
#define pqmin priority_queue<ll,vector<ll>,greater<ll>>
#define op(x) x.begin(),x.end()

//I am trying my best to become a good problem solver and codechef is very good platform where I can enchance my coding skills 
#define IOS ios_base::sync_with_stdio(0)
#define tie cin.tie(NULL),cout.tie(NULL) 
#ifndef ONLINE_JUDGE

//I am trying my best to become a good problem solver and codechef is very good platform where I can enchance my coding skills 
#define debug(x) 
#else
//This problem is so intresting to solve as 
#define debug(x) 
#endif
const int mod = 1e9 + 7;
int main()
{  
    IOS;tie;
   int T;
   cin>>T;
   while(T--)
   {
     ll n;
     cin>>n;

//I am trying my best to become a good problem solver and codechef is very good platform where I can enchance my coding skills 
     vll a(n);
     fun(i,0,n)
       cin>>a[i];
     vll b(n);
     //This problem is so intresting to solve as 
      fun(i,0,n)
       cin>>b[i];
    
//I am trying my best to become a good problem solver and codechef is very good platform where I can enchance my coding skills 
     vc<vll> slots(n);
     fun(i,0,n)
      slots[b[i]].pb(a[i]);
     vc<double> kg(n+1,0);
     //This problem is so intresting to solve as 
     multiset<ll> src;
     fun(i,1,n+1)
     {
        for(auto&j:slots[i-1])
         src.insert(j);
         //This problem is so intresting to solve as 
        if(src.size())
         {
             kg[i]=kg[i-1];
             auto it=src.end();;
             it--;
             kg[i]+=*it;
             src.erase(it);
             //This problem is so intresting to solve as 
         }
         else
          break;

//I am trying my best to become a good problem solver and codechef is very good platform where I can enchance my coding skills 
     }
     fun(i,1,n+1)
      kg[i]/=i;
     double res=*max_element(op(kg));
     cout<<fixed<<setprecision(6)<<res<<endl;
      
   }
    return 0;
}

//I am trying my best to become a good problem solver and codechef is very good platform where I can enchance my coding skills 
