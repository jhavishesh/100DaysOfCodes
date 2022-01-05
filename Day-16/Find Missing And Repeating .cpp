/* https://practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/1/ */

//Solution:

 int *findTwoElement(int *arr, int n) {
        
          sort(arr,arr+n);
       int x;
       int y;
       for(int i=0;i<n;i++){
           if(arr[i]==arr[i+1]){
               x=arr[i];
           }
           if (binary_search(arr, arr + n, i+1)){
                continue;
            }else{
                y=i+1;
            }
       }
      int *ans = new int[2];
      ans[0] = x;
      ans[1] = y;
      return ans;
    }
