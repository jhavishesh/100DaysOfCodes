/*  https://practice.geeksforgeeks.org/problems/count-the-subarrays-having-product-less-than-k1708/1/  */


//Solution 

int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        
       long long int start=0,end=0,count=0,prod=1;
       while(end<n){ //ot of bound error check
           prod*=a[end];  //track of products
           while(start<n and prod>=k){   
               prod=prod/a[start];
               start++;
           }
           if(prod<k)
           count+=end-start+1;
          
           end++;
       }
       return count;
    }
