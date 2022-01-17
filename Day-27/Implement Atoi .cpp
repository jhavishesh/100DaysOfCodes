/* https://practice.geeksforgeeks.org/problems/implement-atoi/1/ */

//Naive Sol:

int atoi(String str) {
	    
	    int a = -1;
	    
	    try {
	        a = Integer.parseInt(str);
	    }
	    catch(Exception e) {
	        return a;
	    }
	    
	    return a;
    }

//Optimal Sol:

 int atoi(string str) {
    
    int res=0;
        for(auto c: str){
            if(c=='-'){
                continue;
            }
            if(c>='0' && c<='9'){
                res=res*10+(c-'0');
            }
            else{
                return -1;
            }
        }
        return (str[0]=='-' ? -1*res : res);
    }    
    
