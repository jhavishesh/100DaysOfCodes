/* https://www.codechef.com/START23C/problems/SUBMEX */

//Solution:

#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t; 
	cin >> t;
	while(t--)
	{
		int n, k, x; 
		cin >> n >> k >> x;
		if(k < x)
			cout << "-1\n";
		else
		{
			int val=0,i;
			for(i=1; i<=n; i++)
			{
				if(val == x)
					val = 0;
				cout << val << " ";
				val++;
			}
			cout << "\n";
		}
	}
	return 0;
}
