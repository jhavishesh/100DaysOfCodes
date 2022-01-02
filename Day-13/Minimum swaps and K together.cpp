/*  https://practice.geeksforgeeks.org/problems/minimum-swaps-required-to-bring-all-elements-less-than-or-equal-to-k-together4847/1  */



// Solution:

int minSwap(int arr[], int n, int k) {
       
        int good=0;
        int bad=0;
        
        //Good Value : value less than equal to k 
        //Bad Value : value more than k 
        
        for(int i=0;i<n;i++)
        {
            if(arr[i]<=k) //count of good values
                good++;
        }
        for(int i=0;i<good;i++)
        {
            if(arr[i]>k)
                bad++;      //count of bad values
        }
        int i=0,j=good,res=bad;
        
        while(j<n){
            
            if(arr[i]>k)  // if the start of window's was bad then reduce the count
                bad--;
            
            if(arr[j]>k)
                bad++;   // if the end of window's was bad then increment the count
                
            res =min(bad,res);
                
            i++; //shifting the window
            j++;
        }
        return res; //return the minimum swap
        
    }
