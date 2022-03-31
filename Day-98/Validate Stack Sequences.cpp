//https://leetcode.com/problems/validate-stack-sequences/

//Solution:


class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
         stack<int> st;
        int i = 0, j = 0;
        while (j < popped.size()){
            if (!st.empty() && st.top() == popped[j]) {
                st.pop();
                j++;
            }else if (i < pushed.size()){
                st.push(pushed[i]);
                i++;
            }else return false;
        }
        return true;
    }
};
