//https://leetcode.com/problems/minimum-remove-to-make-valid-parentheses/


//Solution:

class Solution {
public:
    string minRemoveToMakeValid(string s) {
        string ss="";
        if(s=="") return s;
        int co =0,cc=0; //co -> count of open paranthesis, cc->count of closed paranthesis
        for(int i=0;i<s.length();i++){
            if(s[i]=='(') co++; //count number of open paranthesis
            if(s[i]==')')  cc++;//count number of closed paranthesis
			//if at any position count of closed get greater we will omit that
            if(s[i]==')' && cc>co){
                cc--;
                ss+="";
            }else{ //else we will keep on adding
                ss+=s[i];
            }
            
        }
        s =ss;
        ss="";
        co=0;
		//now setting count of open paranthesis again to zero 
        for(int i=0;i<s.length();i++){
            if(s[i]=='(') co++;
			// From now if count of open Paranthesis gets greater we will omit that
            if(s[i]=='(' && co>cc){
                co--;
                ss+="";
            }else{
                ss+=s[i];
            }
        }
		//This way we get our valid string
        return ss;
        
    }
};
