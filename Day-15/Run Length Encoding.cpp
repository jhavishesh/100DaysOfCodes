
/* https://practice.geeksforgeeks.org/problems/run-length-encoding/1/ */

string encode(string src)
{     
   
  int n= src.length(); // find the length of string
  
  for(int i=0;i<n;i++){  //traverse the string
      
      int count =1;
      while(i<n-1 && src[i]==src[i+1]){  // track of all character and frequency of the string src
          count++;
          i++;
      }
      cout<<src[i]<<count; //printing the corresponding character & frequency 
  }
}     
 
