//https://leetcode.com/problems/delete-and-earn/

//Solution:

  int maxPoints(vector<int>& nums, int index, Map &freq, Map &memo){
        if(index >= nums.size())  return 0;
        
        int currNum = nums.at(index), points = currNum * freq[currNum];
        if(memo.find(currNum) != memo.end())  
            return memo.at(currNum);
        
        int newIndex = index;
        while(newIndex < nums.size() && nums.at(newIndex) == currNum)  
            newIndex++;
        
        int nextIndex = newIndex;
        while(nextIndex < nums.size() && nums.at(nextIndex) == currNum + 1)  
            nextIndex++;
		
		
        int points_one = points + maxPoints(nums, nextIndex, freq, memo);
        int points_two = maxPoints(nums, newIndex, freq, memo);
        
        
        return memo[currNum] = max(points_one, points_two);
    }
    
    int deleteAndEarn(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        Map freq, memo;
        
        for(int &num : nums) freq[num]++;
        
        return maxPoints(nums, 0, freq, memo);
    }
