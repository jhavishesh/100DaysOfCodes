/* https://practice.geeksforgeeks.org/problems/count-pairs-with-given-sum5022/1#  */

//Solution:

int getPairsCount(int arr[], int n, int k) {
        
        unordered_map<int,int> mp;
        int ctr(0);
        for(int i=0;i<n;i++)
        {
            ctr+=mp[k-arr[i]];
            mp[arr[i]]++;
        }
        return ctr;
    }
