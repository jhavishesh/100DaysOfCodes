/* https://practice.geeksforgeeks.org/problems/column-name-from-a-given-column-number4244/1/ */\


//Naive Solution O(Log26(N))
 string colName (long long int n)
    {
        string s = "";
        while(n != 0) {
            // To make the number 0 indexed
            n--;
            int r = n % 26;
            s = string(1, r + 'A') + s;
            n = n / 26;
        }
        return s;
    }


//Optimal Sol

string colName (long long int n)
    {
        long long int temp = n;
       
       int numOfChars=1;
       while(temp>pow(26,numOfChars))
       {
           temp-=pow(26,numOfChars);
           numOfChars++;
       }
       
       string ans(numOfChars, 'A');
       
       for(int i=0 ; i<ans.length() ; i++)
       {
           temp = n;
           for(int j=0 ; j<ans.length() ; j++)
           {
               if(j==i)
               {
                   continue;
               }
               
               temp-=( pow(26,ans.length()-j-1)*(ans[j]-64) );
           }
           
           int value = floor(temp/pow(26,ans.length()-i-1));
           ans[i] = value+64;
       }
       
       return ans;
   }

 

/*Firstly, we find number of characters in ans! Lets say, it is 3 then ans shall be between “AAA” - “ZZZ”.

 

We initially take ans to be “AAA”, then it represents the number 703 →

703 = (26^2)*1 + (26^1)*1 + (26^0)*1, where every multiplicant ‘1’ represents character ‘A’.

 

So, for any number, we can get its characters in ans one by one. */
