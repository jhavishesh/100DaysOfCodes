/*Reverse a String 

You are given a string s. You need to reverse the string.

Example 1:

Input:
s = Geeks
Output: skeeG
Example 2:

Input:
s = for
Output: rof
Your Task:

You only need to complete the function reverseWord() that takes s as parameter and returns the reversed string.

Expected Time Complexity: O(|S|).
Expected Auxiliary Space: O(1).

Constraints:
1 <= |s| <= 10000

https://practice.geeksforgeeks.org/problems/reverse-a-string/1 */

// Method :1    TC->O(n)
  
string reverseWord(string str){
    
    
  reverse(str.begin(),str.end());
  
  return str;
  
}



//Method :2       TC-> O(n)

void rvereseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
