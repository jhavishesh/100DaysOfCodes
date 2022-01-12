/* https://practice.geeksforgeeks.org/problems/square-root/1  */

//Solution:

 long long int floorSqrt(long long int x) 
    {
            long long int low(0),high(x),res(0);
            while(low<=high){
                long long int mid=low+(high-low)/2;
                long long sq = mid*mid;
                
                if(sq==x)
                    return mid;
                    
                else if(x>sq)
                {
                    low=mid+1;
                    res=mid;
                }
                else
                    high=mid-1;
            }
            
        return res;
    }
