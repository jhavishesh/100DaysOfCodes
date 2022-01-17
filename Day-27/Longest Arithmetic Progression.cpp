/* https://practice.geeksforgeeks.org/problems/longest-arithmetic-progression1019/1/# */

int lengthOfLongestAP(int A[], int n) {
        int ans = 0;
       if(n == 1) return 1;

        vector<vector<int>>dp(n, vector<int>(10001));
        
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {

                int d = A[j] - A[i];

                dp[j][d] = max(dp[i][d] + 1, 2);

                ans = max(ans, dp[j][d]);
            }
        }

        return ans;
    }
