/* https://leetcode.com/problems/partition-array-according-to-given-pivot/ */

//Solution:

class Solution {
public:
vector pivotArray(vector& nums, int pivot) {
vectorres;
vectorg;
int p=0;
for(int i=0;i<nums.size();i++)
{
if(nums[i]<pivot)res.push_back(nums[i]);
else if(nums[i]==pivot)p++;
else g.push_back(nums[i]);
}

   for(int i=0;i<p;i++) res.push_back(pivot);

    
   for(int i=0;i<g.size();i++) res.push_back(g[i]);
       
    
    
    return res;
    
}
};

