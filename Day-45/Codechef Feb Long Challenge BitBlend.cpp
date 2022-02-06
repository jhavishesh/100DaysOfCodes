/* https://www.codechef.com/FEB221C/problems/BITBLEND */

//Solution:

#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll b1[200002];
ll b2[200002];
ll B1=0;
ll B2=0;
void function1(ll x,ll y){
    b1[B1]=x;
    B1++;
    b1[B1]=y;
    B1++;
}
void function2(ll x,ll y){
    b2[B2]=x;
    B2++;
    b2[B2]=y;
    B2++;
}
int main()
{
    ll t;
    cin >> t;
    while(t--){
        B1=0;
        B2=0;
        
        ll count_1 = 0;
        ll count_2 = 0;
        
        ll n;
        cin >> n;
        ll a[n];
        ll A[n];
        
        ll Y1=0,Y=2;
        ll y1=0,y=0;
        
        ll odd_check =0;
        for(ll i=0; i<n ;i++){
            cin>>a[i];
            A[i]=a[i];
        }
        
if(a[0]%2==0)
{
    if(a[1]%2==0){
         
         for(ll i=2;i<n;i++){
             if(a[i]%2==1){
                 Y1=a[i];
                 y1=i;
                 odd_check = 1;
                 
                 a[1] = a[1]^Y1;
                 count_1++;
                 function1(1,y1);
                 break;
             }
         }
         
    }
    else{
        Y1=a[1];
        y1=1;
        odd_check = 1;
    }
      Y=a[1];
      y=1;
      for(ll i =2;i<n;i++){
          if(a[i]%2==1){
              a[i]=a[i]^Y;
              count_1++;
              function1(i,y);
          }
          i++;
          if(i<n){
              if(a[i]%2==0){
                  a[i]=a[i]^Y;
              count_1++;
              function1(i,y);
              }
          }
      }
      A[0]=A[0]^Y1;
      count_2++;
      function2(0,y1);
      
      Y=A[0];
      y=0;
      
      for(ll i=1;i<n;i++){
          if(A[i]%2==1){
              A[i]=A[i]^Y;
              count_2++;
              function2(i,y);
          }
          i++;
          if(i<n){
              if(A[i]%2==0){
                  A[i]=A[i]^Y;
                  count_2++;
                  function2(i,y);
              }
          }
      }
    
    
}
else{
    odd_check = 1;
    Y=A[0];
    y=0;
    for(ll i=1;i<n;i++){
        if(a[i]%2==1){
            a[i]=a[i]^Y;
            count_1++;
            function1(i,y);
        }
        i++;
        if(a[i]%2==0 && i<n){
            a[i]=a[i]^Y;
            count_1++;
            function1(i,y);
        }
    }
    
    Y = A[0];
    y=0;
    
    for(ll i=1;i<n;i++){
        if(A[i]%2==0){
            A[i]=A[i]^Y;
            count_2++;
            function2(i,y);
        }
        i++;
        if(A[i]%2==1 && i<n){
            A[i]=A[i]^Y;
            count_2++;
            function2(i,y);
        }
    }
    
    A[0]=A[0]^A[1];
    count_2++;
    function2(0,1);
    
}
 if(odd_check==0){
     cout<<"-1\n";
 }
 else if(count_1>count_2){
     ll j;
     cout<<count_2<<"\n";
     for(ll i=0;i<count_2;i++){
         j=i*2;
         cout<<b2[j]+1<<" "<<b2[j+1]+1<<"\n";
     }
 }
 else{
     int j;
     cout<<count_1<<"\n";
     for(ll i=0;i<count_1;i++){
         j=i*2;
         cout<<b1[j]+1<<" "<<b1[j+1]+1<<"\n";
     }
 }

    
}
        
      return 0;  
    }
