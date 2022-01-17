/* https://leetcode.com/problems/minimum-moves-to-reach-target-score/ */

//Solution:

int minMoves(int target, int maxDoubles) {
        
        int cnt=0;
        
        while(target>1 && maxDoubles !=0){
            
            if(target%2==0){
                target/=2;
                maxDoubles-=1;
                
            }
            else{
                 target-=1;
            }
            cnt++;
        }
            
        cnt+=(target-1);
        
        return cnt;
    }
