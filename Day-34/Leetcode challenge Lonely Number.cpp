/* https://leetcode.com/problems/find-all-lonely-numbers-in-the-array/  */

//Solution:

  vector<int> findLonely(vector<int>& nums) {
        
        vector<int> f(1e6+2 ,0);
        for(auto &i:nums)
            f[i]++;
        
        vector<int> ans;
        for(int i=0;i<=1e6;i++)
        {
            if(!i)
            {
                if(f[i]==1 && f[i+1]==0)
                    ans.push_back(i);
            }
            else if(f[i]==1 && (i && !f[i-1])&&!f[i+1])
                ans.push_back(i);
        }
        return ans;
    }
