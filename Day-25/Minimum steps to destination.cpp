/* https://practice.geeksforgeeks.org/problems/minimum-number-of-steps-to-reach-a-given-number5234/1/  */

//Solution:

/* The logic behind this problem is that we keep adding the number till either we get our target of we hit greaer than target...
Now, let's take some examples.
D = 1 (1 steps)
D = 2 (1 + 2) which is greater than 2 now we keep adding element till sum > target and (sum-target)%2 == 0) because
      (1 + 2 + 3) here 6 - 4 = 2 so we will stop here... the logic here is if we turn +2 to -2 (1 -2 + 3) we will get 2...so we will be ultimately substracting 2*i from 
      out sum....
      
D = 3 (1+2)  = 3
D = 4 (1 + 2 + 3) -->> -1 + 2 + 3 i.e 3    */

    
int minSteps(int D){
        
        int steps = 0, sum = 0;
        while(true){
            sum = sum + steps;
            steps++;
            if(sum == D){
                return steps-1;
                break;
            }
            if(sum > D and (sum-D)%2 == 0){
                return steps-1;
                break;
            }
        }
        return 0;
    }
};
