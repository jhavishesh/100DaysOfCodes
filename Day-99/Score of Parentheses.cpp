//https://leetcode.com/problems/score-of-parentheses/


//Solution:

class Solution {
public:
    int scoreOfParentheses(string s) {
         stack<int> st;
    int ans=0;
    for(int i=0;i<s.size();i++){
        
        int total=0;
        if(s[i]=='('){
            
            st.push(0);
        }else if(s[i]==')'){
            
            while(st.top()!=0){
                
                total+=st.top();
                st.pop();
            }
            total=max(2*total,1);
            st.pop();
            st.push(total);
        }
    }
    while(!st.empty()){
                
        ans+=st.top();
        st.pop();
    }
    return ans;
    }
};
