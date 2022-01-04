/* https://practice.geeksforgeeks.org/problems/ugly-numbers2254/1/# */

ull getNthUglyNo(int n) {
	    
	   
	 
	   vector <long long int > ug(n+1);   // to store the nth ugly number
	    
	     ug[0]=1;    //include 1 as ugly number
	    
	   long long int c2(0),c3(0),c5(0);  // counter for Nth number = 2^a*3^b*5^c
	    
	    for(int i=1;i<=n;i++)
	    {
	        ug[i] =min({2*ug[c2] , 3*ug[c3] , 5*ug[c5]});  // for the next ugly number it comes from already calculated number of minimum multiple of 2 or 3 or 5.
	        
	        if(2*ug[c2]==ug[i])
	            c2++;                // if we get nth ugly from multiple of 2
	            
	       if(3*ug[c3]==ug[i])
	            c3++;              // if we get nth ugly from multiple of 3
	            
	       if(5*ug[c5]==ug[i])
	            c5++;                // if we get nth ugly from multiple of 5
	    }
	    return ug[n-1];           // return the result
	}
