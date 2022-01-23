/* https://practice.geeksforgeeks.org/problems/missing-number-in-array1416/1# */

//Solution:

 int MissingNumber(vector<int>& array, int n) {
        
        int res=n*(n+1)/2;
        
        int sum(0);
        
      sum= accumulate(array.begin(),array.end(),0);
        
        int ans= res-sum;
    
        
        return ans;
    }
