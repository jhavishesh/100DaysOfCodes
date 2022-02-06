/* https://leetcode.com/problems/minimum-sum-of-four-digit-number-after-splitting-digits/ */


//Solution:

class Solution {
public:
int minimumSum(int num) {
int arr[4];
for(int i=0;i<4;i++)
{
int x=num%10;
num/=10;
arr[i]=x;
}

    sort(arr,arr+4);
    int sum=arr[0]*10+arr[3]+arr[1]*10+arr[2];
    return sum;
}
};

easy-understanding
so
