//https://www.codechef.com/START29D/problems/BOMBTHEBASE

//Solution:

#include <bits/stdc++.h>

using namespace std;


int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++)
     {
         int N,X;
         cin>>N>>X;
         int arr[N];
         for(int i=1;i<=N;i++)
         {
            cin>>arr[i];
         }
        
        int ctr(0);
        for(int i=0;i<=N;i++)
        {   

            if(X>arr[i])
            {
            ctr=i;
            
            }
        }
        cout<<ctr<<endl;
        

    }
 }

