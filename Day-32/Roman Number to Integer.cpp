/* https://practice.geeksforgeeks.org/problems/roman-number-to-integer3201/1# */

//Solution:

int romanToDecimal(string &str) 
{
    unordered_map<char, int> mp = {{'M', 1000}, {'D', 500}, {'C', 100}, {'L', 50}, {'X', 10}, {'V', 5}, {'I', 1}};  //create a map for the all the mentioned details
	
  int res = mp[str.back()];  // store last element
	for(int i = str.size()-2; i>=0; i--) //traverse from back to first 
  {
		if(mp[str[i]] < mp[str[i + 1]])  //check if very last and its previous and perform action like that
    res -= mp[str[i]];              // if previous one is smaller than last one then subtract it 
		else 
    res += mp[str[i]];        // if previous one is greatar than last one then add it 
	}
	return res;               //  MCMXCIV  ->  V = 5 Initially(last one)  I=1 (prev one) so we subtract it 5-1 =4 and perform till M 
 }
 
