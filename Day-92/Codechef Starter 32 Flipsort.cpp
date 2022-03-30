// https://www.codechef.com/START32D/problems/FLIPSORT

//Solution:

#include<bits/stdc++.h>
using namespace std;

//This code is developed by Vishesh JHa 

//This problem is so intresting to solve as I invest lots of effort and time to solve this problem and 


//I am trying my best to become a good problem solver and codechef is very good platform where I can enchance my coding skills 

void helper(){
    int x;
    cin>>x;
    string lor;
    cin>>lor;
    vector<vector<int>>ans;

    for(int i = x-1;i>=0;i--){
      if(lor[i]=='0'){
        int xy = i+1;
        for(int j = 0;j<=i;j++) {
          if(lor[j]=='1') lor[j]='0';
          else lor[j] = '1';
        }
        ans.push_back({1ll,xy});
      }
    }
    int siz = ans.size();
    cout<<siz<<endl;
    for(auto q:ans) cout<<q[0]<<" "<<q[1]<<endl;
}

//This problem is so intresting to solve as I invest lots of effort and time 
int main() {
    int t;
    cin>>t;
//I am trying my best to become a good problem solver and codechef is very good platform where I can enchance my coding skills 
    while(t--)
    {
    helper();
    }
//I am trying my best to become a good problem solver and codechef is very good platform where I can enchance my coding skills 
 return 0;
}
//I am trying my best to become a good problem solver and codechef is very good platform where I can enchance my coding skills 


 

//This is my orginal content


