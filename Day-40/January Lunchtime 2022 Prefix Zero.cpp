/* https://www.codechef.com/LTIME104C/problems/PREZ */

//Solution:


#include <bits/stdc++.h>
using namespace std;

#define ll          long long
#define endl        '\n'


bool check(ll mid, string& s, ll n, ll k){
    ll curr = 0;
    for(int i = mid-1; i >= 0; i--){
        if(k < 0){
            return false;
        }
        ll val = (ll) (s[i] - '0');
        val += curr;
        val %= 10;
        k -= (10-val)%10;
        curr += (10-val)%10;
        if(k < 0){
            return false;
        }
    }
    return (k >= 0);
}


signed main(){
    
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif



    int tc = 0, tt = 1;
    cin >> tt;
    while (tc++ < tt)
    {
        
        ll n, k;
        cin >> n >> k;
        string s; cin >> s;

        ll start = 1, end = n, ans = 0;
        while(start <= end){
            ll mid = start - (start - end)/2;
            if(check(mid, s, n, k)){
                ans = mid; start = mid + 1;
            }else{
                end = mid - 1;
            }
        }

        cout << ans << endl;




        
    }

    return 0;
}
