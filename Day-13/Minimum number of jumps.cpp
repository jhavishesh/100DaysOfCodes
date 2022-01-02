/*  https://practice.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1#  */


// Solution:

int minJumps(int arr[], int n){
        
        int maxr=arr[0];  //setting the maxreachable point reached initially 
        int step=arr[0];  //setting maximum step can be reached initially 
        int jump=1;       // if there is any step then jump would be 1 initially 
        
        
        if(n==1)return 0;    //edge cases
        else if(arr[0]==0)return -1;    //corner cases
        else{
            
            for(int i= 1;i<n;i++){    //we start traverse froms second element as we stepdown from arr[0] element
                
                if(i==n-1){       //terminating case if we reach to last element we return stored jump value
                  return jump;
                    
                }
                maxr=max(maxr,arr[i]+i);   // storing maximum reachable steps
                step--;
                if(step==0){    //if we reach from 1 point-> another then we decrement the step by 1
                    jump++;     //and increment the jump by 1
                    
                    if(i>=maxr){   //terminating case if i> maxr then we can't jump forward so we need return -1 that we can't reach till end
                        return -1;
                    }
                
                    step=maxr-i;   //finding the step 
                }
                
                
            }
            
            
        }
        
    }
