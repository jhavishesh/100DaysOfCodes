/* */

//Solution:

#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
        cin >> n;


        for(int i =0; i < n; i++){
            if(i%3==0) cout << "x";
            else if(i%3==1) cout << "y";
            else cout << "z";
        }

        cout << '\n';
}
int main(){
   int t;
   cin>>t;
   while(t--){
       solve();
   }
   return 0;
}
