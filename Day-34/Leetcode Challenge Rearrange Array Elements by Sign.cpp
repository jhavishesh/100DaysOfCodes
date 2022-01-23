/* https://leetcode.com/problems/rearrange-array-elements-by-sign/ */


//Solution:

 vector<int> rearrangeArray(vector<int>& nums) {
        
        vector<int> a,b;
        for(auto x:nums){
            if(x>0)
                a.push_back(x);
            else
                b.push_back(x);
        }
        
        vector<int> res;
        
        for(int i=0;i<a.size();i++)
        {
            res.push_back(a[i]);
            res.push_back(b[i]);
        }
        return res;
    }
