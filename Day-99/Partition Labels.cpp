//https://leetcode.com/problems/partition-labels/


//Solution:

class Solution {
public:
    vector<int> partitionLabels(string s) {
         vector<int> ans;
        vector<int> end(26,-1);
        
        for(int i=0;i<s.length();i++)
            end[s[i]-'a']=i;    //store last index of each element
        
        int mx=0;   //to store max index of element
        int l=0;    //will point to index where we started new partition
        for(int i=0;i<s.length();i++) {
            
            mx=max(mx,end[s[i]-'a']); //store maximum index of element as u traverse
            if(i==mx) { //if max_index == i means u won't find that char afterwards, this is first partition
                ans.push_back(i-l+1);   //push the length
                l=i+1;               
            }
            
                       
        }
        return ans;
    }
};
