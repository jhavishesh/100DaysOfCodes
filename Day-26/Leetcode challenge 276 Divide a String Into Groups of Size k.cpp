/* https://leetcode.com/contest/weekly-contest-276/problems/divide-a-string-into-groups-of-size-k/ */

//Solution:

 vector<string> divideString(string s, int k, char fill) {
        int n = s.size(); //length of string
        int rem = n%k;    //find the remainder
        if(rem != 0) 
        {
            while(rem++ != k) 
            {                       
                s.push_back(fill); //until remainder i.e 2 so we need to push x 2 times
            }
        }
        
        vector <string> res; 
        
        for(int i=0; i<n; i+=k) 
        {
            res.push_back(s.substr(i,k));  //find the substring of len k
        }
        return res;
    }
    
