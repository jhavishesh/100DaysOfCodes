/*   https://practice.geeksforgeeks.org/problems/find-the-position-of-m-th-item1723/1/# */


Solution:

int findPosition(int N , int M , int K) {
   
    
    if(N==1)
        return 1;
    
    //Method 1:
    else if((M+K-1)%N==0) // If the postion is equal to N then return N
        return N;
    else
        return(M+K-1)%N; //otherwise return postion in circular fashion
     
     //We can sum up line 19-23 in just one liner by ternary operator
     return(M+K-1)%N==0)?N:(M+K-1)%N
    }
