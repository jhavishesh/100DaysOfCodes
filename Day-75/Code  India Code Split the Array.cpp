// https://practice.geeksforgeeks.org/contest/gfg-mega-contest-qualification-round/problems/ 

//Solution:

#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll c[10022][2][2];  // for not going beyond the limit
int N;
ll arr[10020];

ll helper(int i, bool j, bool k) {
    
    if (i >= N)  //Base case
        return 0;
  
    if (c[i][j][k] != 1e18)
        return c[i][j][k];
        

    ll val = arr[i];    
    if ((j + k) & 1)
        val *= -1;
    
    return c[i][j][k] = max(helper(i + 1, !j, k) + val, helper(i + 1, 1, !k) + val);
        //Recursive Call of function for finding the beauty of array
}

int main()
{

    int T;
    cin >> T;
    while(T--) {
       cin >> N;

    	for (int i = 0; i < N; i++) {
    	    cin >> arr[i];
    	    
    	    c[i][0][0] = 1e18;
    	    c[i][0][1] = 1e18;
    	    c[i][1][0] = 1e18;
    	    c[i][1][1] = 1e18;
    	}
    	
    	cout << helper(0, 1, 1) <<endl;  //calling the helper function
   }
   return 0;
}
