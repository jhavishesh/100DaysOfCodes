// https://www.codechef.com/START32D/problems/MAXTHEMIN/

//Solution:

#include<bits/stdc++.h>
using namespace std;

//This code is developed by Vishesh JHa 

//This problem is so intresting to solve as I invest lots of effort and time to solve this problem and 


//I am trying my best to become a good problem solver and codechef is very good platform where I can enchance my coding skills 

void helper() {
    long long x, op;
    cin >> x>> op;
    //This problem is so intresting to solve as I invest lots of effort and time 
    vector<long long> res(x);
    for (int i = 0; i < x; i++)
        cin >> res[i];
    sort(res.begin(), res.end());
//This problem is so intresting to solve as I invest lots of effort and time 
    cout << (res[min(op, x - 1)]) << "\n";
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


