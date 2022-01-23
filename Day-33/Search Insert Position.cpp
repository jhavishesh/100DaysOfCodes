/* https://leetcode.com/problems/search-insert-position/  */

//Solution:

int searchInsert(vector<int>& nums, int target) {
        
        int ans(0);
        int n=nums.size();
        int x=*max_element(nums.begin(),nums.end());
        
        if(target>x)
            ans=n;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==target)
                ans= i;
            
            else if(nums[i-1]<target && target<nums[i])
                ans= i;
            
        }            
      

    
    return ans;
    }
