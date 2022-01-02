#include <iostream> 
using namespace std; 
  
int maxSum(int arr[], int n, int k) 
{ 
    // n must be greater 
    if (n < k) { 
        cout << "Invalid\t"; 
        return -1; 
    } 
  
    // Compute sum of first window of size k 
    int window_sum = 0; 
    for (int i = 0; i < k; i++) 
        window_sum += arr[i]; 
  
    // Compute sums of remaining windows by 
    // removing first element of previous 
    // window and adding last element of 
    // current window. 
    int max_sum=0;
    for (int end = k; end < n; end++) { 
        window_sum += arr[end] - arr[end - k]; 
        max_sum = max(max_sum, window_sum); 
    } 
  
    return max_sum; 
} 
  
// Driver code 
int main() 
{ 
    int arr[] = { 1,2,-3,4,5,6}; 
    int k = 4; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    cout << maxSum(arr, n, k); 
    return 0; 
} 

