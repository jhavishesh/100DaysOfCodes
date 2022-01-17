/* https://www.codechef.com/JAN222C/problems/EXAMTIME */

//Solution:

#include <bits/stdc++.h>
using namespace std;

int main() 
{
	
	int t;
	cin>>t;
	int dr[3],sl[3];
	while(t--)
	{
	    for(int i=0;i<3;i++)
	        cin>>dr[i];
	   
	   for(int i=0;i<3;i++)
	        cin>>sl[i];
	        
	
	int dr_sum(0),sl_sum(0);
	
    int x1=accumulate(dr, dr+3, dr_sum);
	int x2=accumulate(sl, sl+3, sl_sum);
	
	if(x1>x2)
	    cout<<"DRAGON"<<endl;
	else if(x2>x1)
	    cout<<"SLOTH"<<endl;
	
	for(int i=0;i<3;i++) 
	{
	    if(dr[0]>sl[0] && x1==x2)
	    {
	       cout<<"DRAGON"<<endl;
	       break;
	    }
	        
	   else if(sl[0]>dr[0] && x1==x2)
	   {
	       cout<<"SLOTH"<<endl;
	       break;
	   }
	        
	  else if(x1==x2 && dr[0]==sl[0] && dr[1]>sl[1])
	  {
	      cout<<"DRAGON"<<endl;
	      break;
	  }
	  else if(x1==x2 && dr[0]==sl[0] && dr[1]<sl[1])
	  {
	      cout<<"SLOTH"<<endl;
	      break;
	  }
	  else if(x1==x2 || dr[0]==sl[0] && dr[1]==sl[1] && dr[2]==sl[2])
	  {
	      cout<<"TIE"<<endl;
	      break;
	  }
	   
	}
}
return 0;
}
