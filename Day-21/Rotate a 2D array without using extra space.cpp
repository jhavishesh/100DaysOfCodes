/* https://practice.geeksforgeeks.org/problems/rotate-a-2d-array-without-using-extra-space1004/1/#  */

//Solution:

void rotateMatrix(vector<vector<int>>& arr, int n) {
	    for(int i=0;i<n;i++){
	        for(int j=i;j<n;j++){
	            swap(arr[j][i],arr[i][j]);
	        }
	    }
	    int start(0),end(n-1);
	    while(start<end){
	        
	        swap(arr[start++],arr[end--]);
	    }
	}
