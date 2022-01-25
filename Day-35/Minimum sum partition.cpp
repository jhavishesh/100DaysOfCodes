/*  https://practice.geeksforgeeks.org/problems/minimum-sum-partition3317/1/  */


//Solution:

int minDifference(int arr[], int n)  { 
	     long long int sum=0;
  for(int i=0;i<n;i++)
  sum+=arr[i];
  
  int dp[n+1][sum+1];
  
  for(int i=0;i<=n;i++)
  {
      for(int j=0;j<=sum;j++)
      {
          if(j==0)
            dp[i][j]=1;
          else if(i==0)
            dp[i][j]=0;
          else
          {
              
              dp[i][j]=dp[i-1][j];
              if(j>=arr[i-1])
                dp[i][j]=dp[i][j]||dp[i-1][j-arr[i-1]];
          }
      }
  }
  long long ans=INT_MAX;
  for(int j=0;j<=sum;j++)
  {
      if(dp[n][j])
      {
          ans=min(ans,abs(sum-2*j));
      }
  }
  return ans;
  
	} 
