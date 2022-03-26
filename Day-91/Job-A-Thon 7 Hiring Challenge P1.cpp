// https://practice.geeksforgeeks.org/contest/job-a-thon-7-hiring-challenge/problems/

//Solution:

int solve(int n,string Str, int c[])
  { 
     int x=0,y=0,res=0;
     
      for(int i=0;i<n/2;i+=2)
      {
          x=0,y=0;

          string p=Str.substr(i,2);
          
          string q=Str.substr(n-i-2,2);
          
          if(p[0]==q[0] && p[1]==q[1])
            continue;
          else if(p[0]==q[0])
            x+=min(c[i+1],c[n-i-1]);
          else if(p[1]==q[1])
            x+=min(c[i],c[n-i-2]);
          else
          {
             x+=min(c[i+1],c[n-i-1]); 
             x+=min(c[i],c[n-i-2]);
          }

          if(p[0]==q[1] && p[1]==q[0])
            continue;
          else if(p[0]==q[1])
            y+=min(c[i+1],c[n-i-2]);
          else if(p[1]==q[0])
            y+=min(c[i],c[n-i-1]);
          else
          {
             y+=min(c[i+1],c[n-i-2]); 
             y+=min(c[i],c[n-i-1]);
          }
          res+=min(x,y);
      }
  
      return res;
  }
