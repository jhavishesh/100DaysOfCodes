//https://practice.geeksforgeeks.org/problems/closest-strings0611/1

//Solution:

int shortestDistance(vector<string> &s, string word1, string word2)
	{
	    int temp1(-1),temp2(-1),res(INT_MAX);
	
		for(int i=0;i<s.size();i++)
		{
		    if(s[i]==word1)
		        temp1=i;
		  
		     if(s[i]==word2)
		        temp2=i;
            
            
            if(temp1>=0 && temp2>=0)
            
            res=min(res,abs(temp2-temp1));
		}
		
       

        return res;
	}
