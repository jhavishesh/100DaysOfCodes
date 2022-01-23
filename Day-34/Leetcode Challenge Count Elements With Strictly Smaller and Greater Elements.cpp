/* https://leetcode.com/problems/count-elements-with-strictly-smaller-and-greater-elements/ */

//Solution:

int countElements(vector<int>& nums) {
        
        int ctr(0);
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=nums[0]  && nums[i]!=nums.back())
            {
                ctr++;
            }
        }
        return ctr;
    }
