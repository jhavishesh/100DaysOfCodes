/* https://practice.geeksforgeeks.org/problems/second-most-repeated-string-in-a-sequence0534/1# */


//Solution:

 string secFrequent (string arr[], int n)
    {
        unordered_map<string ,int>mp;
        
        
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;    //count the frequency of element
        }
         
         int count1(-1),count2(-1);
         string max1,max2;   //for max1 and max2
         
         for(int i=0;i<n;i++){
             
             if(mp[arr[i]]>count1)
             {
                count1=mp[arr[i]];   //finding max1 element
                max1=arr[i];
             }
          }
           for(int i=0;i<n;i++){
             
             if(mp[arr[i]]>count2 && mp[arr[i]]<count1 )
             {
                count2=mp[arr[i]]; //finding the second max element
                max2=arr[i];
             }
          }
       
       return max2;   //return the result
    }
