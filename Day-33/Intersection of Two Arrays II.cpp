/* https://leetcode.com/problems/intersection-of-two-arrays-ii/  */

//Solution:

vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        map<int,int> res;
        vector<int> ans;
        
        for(int i=0;i<nums1.size();i++)
            res[nums1[i]]++;
        
        
        for(int i=0;i<nums2.size();i++)
        {   
            auto it= res.find(nums2[i]);
            if(it->second>0 && it!=res.end())
            {
                ans.push_back(nums2[i]);
                it->second--;
            }  
        }

       return ans; 
    }
