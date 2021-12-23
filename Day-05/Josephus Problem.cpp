/* https://practice.geeksforgeeks.org/problems/game-of-death-in-a-circle1840/1  */




//Time Complexity: O(n)

class Solution
{
    public:
    int josephus(int n, int k)
    {
       //Your code here
       if(n==1) return 1;
      return((josephus(n-1,k)+k-1)%n +1); //recursive call to get the safest position.
    }
};

![Josephus](https://user-images.githubusercontent.com/61939693/147227690-704db814-6279-492f-b181-6bae77bddea3.jpeg)
