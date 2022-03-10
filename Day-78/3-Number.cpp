//https://practice.geeksforgeeks.org/contest/gfg-mega-contest-finale/problems/ 

//Solution:

#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
    cin>>t;
    while(t--)
    {
	    int A,B,C;
	    cin>>A>>B>>C;
	    
	    int x=A%2;
	    int y=B%2; 
	    int z=C%2;
	    
	   
	   if(x==y && y==z && z==x)
	   {
	      cout<<"0"<<endl;
        }
        else
            cout<<"1"<<endl;
    }
}
