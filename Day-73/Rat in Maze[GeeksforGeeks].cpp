// https://practice.geeksforgeeks.org/problems/rat-in-a-maze-problem/1

//Solution:


#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void allPath(int row,int col,int n,vector<vector<int>> &m,string ans,vector<string> &res)
    {
        if(row<0 || row>=n || col<0 || col>=n || m[row][col]==0 )
            return ;// To check whether you are in mat[][] or not
        
        if(row==n-1 && col==n-1) // if we reach to the last cell
        {
            res.push_back(ans); //Push the path followed
            return ;
        }
        m[row][col]=0; // Start with first cell
        
        allPath(row+1,col,n,m,ans+"D",res);  //Go Down
        allPath(row,col-1,n,m,ans+"L",res);  //Go Left
        allPath(row,col+1,n,m,ans+"R",res);  //Go Right
        allPath(row-1,col,n,m,ans+"U",res);  //Go Up
        m[row][col]=1; // Assure the path is visited
        
        return;
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        
        string ans="";//Empty string
        vector<string>res;//To Store the Path
        allPath(0,0,n,m,ans,res);
        sort(res.begin(),res.end());
        return res;
        
    }
