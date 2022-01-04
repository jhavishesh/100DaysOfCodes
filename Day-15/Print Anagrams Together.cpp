/*  https://practice.geeksforgeeks.org/problems/print-anagrams-together/1/# */


//Solution:

vector<vector<string> > Anagrams(vector<string>& string_list) {
        
map <string, vector<string>> mp;//to store string the and sort them
       
 for(int i=0;i<string_list.size();i++) {
   string word = string_list[i];//push all the string in word
   sort(word.begin(), word.end());//sorting individual word
   mp[word].push_back(string_list[i]);//creating a map of all the words
 }
  
 vector<vector<string>> ans;//2-d vector to return the resut     
 for(auto i : mp) {
   ans.push_back(i.second); //push back of sorted string in res
 }    
 return ans;
       
   }
