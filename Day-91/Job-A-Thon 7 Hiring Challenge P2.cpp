// https://practice.geeksforgeeks.org/contest/job-a-thon-7-hiring-challenge/problems/

//Solution:

int solve(int A[],int B[], int N) {
        
       map<int,int>mp;
       
       for(int i=0;i<N;i++)
            mp[A[i]]=1000000001;
            
        
       for(int i=0;i<N;i++){
           mp[A[i]]=min(mp[A[i]],B[i]);
       }
       int res=0;
       for(auto i:mp){
           res+=i.second;
       }
   
       return res;
     

    }

