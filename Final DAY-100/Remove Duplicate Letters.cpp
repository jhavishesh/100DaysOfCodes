//https://leetcode.com/problems/remove-duplicate-letters/


//Solution:

class Solution {
public:
    string removeDuplicateLetters(string s) {
         unordered_map<char, int> map;
        for (int i = 0; i < s.size(); i++)
            map[s[i]]++;
        string ans = "";
        vector<bool> visited(26, false);
        for (int i = 0; i < s.size(); i++)
        {
            if (visited[s[i] - 'a'])
                map[s[i]]--;
            while (ans.size() > 0 && visited[s[i] - 'a'] == false && ans.back() >= s[i] && map[ans.back()] > 1)
            {
                visited[ans.back() - 'a'] = false;
                map[ans.back()]--;
                ans.pop_back();
            }
            if (!visited[s[i] - 'a'])
            {
                ans.push_back(s[i]);
                visited[s[i] - 'a'] = true;
            }
        }
        return ans;
    }
  
};
