// https://practice.geeksforgeeks.org/problems/rotate-array-by-n-elements-1587115621/1/#

//Solution:

 void reverse(int arr[],int start,int end)
    {
        while(start<end)
        {
            swap(arr[start++],arr[end--]);
        }
    }
    void rotateArr(int arr[], int d, int n){
        
    
        reverse(arr,0,d-1);
        reverse(arr,d,n-1);
        reverse(arr,0,n-1);
    }
