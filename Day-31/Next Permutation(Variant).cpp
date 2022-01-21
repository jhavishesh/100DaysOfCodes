/* https://practice.geeksforgeeks.org/problems/next-permutation5226/1 */

//Solution:

vector<int> nextPermutation(int N, vector<int> arr){
        
        int k,l;
        
        for(k=N-2;k>=0;k--)
        {
            if(arr[k]<arr[k+1])
                break;
        }
        if(k<0)
            reverse(arr.begin(),arr.end());
        
        else
        {
            for(l=N-1;l>k;l--){
                
                if(arr[l]>arr[k])
                break;
            }
            
       
        swap(arr[k],arr[l]);
        reverse(arr.begin()+k+1,arr.end());
        }
        vector<int > res;
        for(int i=0;i<N;i++)
            res.push_back(arr[i]);
            
        
        return res;
    }
    
