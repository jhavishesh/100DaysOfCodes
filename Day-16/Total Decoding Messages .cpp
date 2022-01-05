/* https://practice.geeksforgeeks.org/problems/total-decoding-messages1235/1/ */

//Solution:
	int CountWays(string str){
		    int n = str.length();

int count[n+1];
count[0] = 1;
count[1] = 1;

if(str[0]=='0')
return 0;
for (int i = 2; i <= n; i++)
{
count[i] = 0;
if (str[i-1] > '0')
count[i] = count[i-1];

if (str[i-2] == '1' ||
(str[i-2] == '2' && str[i-1] < '7') )
count[i] =(count[i]%1000000007+ count[i-2]%1000000007)%1000000007;
}
return count[n];

}
