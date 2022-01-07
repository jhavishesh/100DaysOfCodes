/* https://practice.geeksforgeeks.org/problems/first-non-repeating-character-in-a-stream1216/1  */

//Solution:

string FirstNonRepeating(string A){
		 
		 vector <int >vis(26,0);  //fpr storing the result
		 string ans ="";         // Empty string
		 vector <char> v;        // for the storing the char in the order
		 int n = A.length();     
		 for(int i=0;i<n;i++){
		     
		     if(!vis[A[i]-'a']){   //here a-> 0, b->1, c->2 ... so if it is used for the visiting checking
		           v.push_back(A[i]);
		     }     
		 vis[A[i]-'a']++;    //track of the count of char
		 int f=0;
		 int m=v.size();  
		 for(int j=0;j<m;j++){
		     
		     if(vis[v[j]-'a']==1){  //if the char is not visited earlier
		        ans.push_back(v[j]);  //i.e that char is present only once so push to the ans string
		        f=1;
		        break;    //come out of the loop
		         
		     }
		 }
		 
		 if(f==0)
		    ans.push_back('#');  //if repeated then push # in ans string
		 
		 }
		 
	return ans;   //retutn the sequence
		}
