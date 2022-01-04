/*  https://leetcode.com/problems/greatest-common-divisor-of-strings/  */


// Solution :

string gcdOfStrings(string str1, string str2) {
        
         return (str1 + str2 == str2 + str1)  // if this condition satisfy then str1 is multiple of str2 or vice versa
		    ? str1.substr(0, gcd(size(str1), size(str2))) // find gcd(str1.size(),str2.size()) and return that substring from either of str1 or str2
			: "";  // otherwise return empty string
        
        
    }
