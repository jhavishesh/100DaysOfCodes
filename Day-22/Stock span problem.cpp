/* https://practice.geeksforgeeks.org/problems/stock-span-problem-1587115621/1# */

//Solution:

  vector <int> calculateSpan(int price[], int n)
    {
         vector<int> res(n,1);
       stack<int> st;
       st.push(0);
       
       for(int i=1; i < n; i++){
           while(!st.empty() and price[st.top()] <= price[i]){
               st.pop();
           }
           int ans = (st.empty()) ? i+1 : i-st.top();
           res[i] = ans;
           st.push(i);
       }
       return res;
    }
