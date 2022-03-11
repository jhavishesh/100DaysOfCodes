// https://practice.geeksforgeeks.org/problems/peak-element/1/

//Solution:

 int peakElement(int arr[], int n)
    {   
        int res(0);
       for(int i=1;i<n;i++)
       {
           if(arr[i-1]<arr[i])
            res=i;
            
       }
        return res;
    }
