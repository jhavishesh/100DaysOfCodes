/* https://leetcode.com/problems/longest-mountain-in-array/ */



//Solution: O(N), O(1)

 int longestMountain(vector<int>& arr) {
        int maxl = 0;  // for the highest mountain 
        int i=1;       //start traverse from second element
        
        while(i < arr.size()) {   //traverse through array
            
            int peak = 0, valley = 0;   // for increasing and decreasing mountain
            while(i < arr.size() && arr[i] > arr[i - 1]) peak++, i++;  //for the increasing the mountain
            while(i < arr.size() && arr[i] < arr[i - 1]) valley++, i++; // for the decreasing the mountain
            if(peak > 0 && valley > 0) maxl = max(maxl, peak + valley + 1); //finding the max length mountain
            else if(peak==0 && valley==0) i++;   //otherwise increment the i
        }
        return maxl;  //return the length
    }
