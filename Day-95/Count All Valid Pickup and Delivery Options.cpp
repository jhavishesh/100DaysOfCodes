//https://leetcode.com/problems/count-all-valid-pickup-and-delivery-options/

//Solution:

 int countOrders(int n) {
         long long c=1,k=1,a=5;
        while(n--)
        {
            c=(c*k)%1000000007;
            k+=a;
            a+=4;
        }
        return (int)c;
    }
