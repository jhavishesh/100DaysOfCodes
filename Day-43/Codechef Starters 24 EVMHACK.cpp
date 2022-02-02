/* https://www.codechef.com/problems/EVMHACK */

//Solution:

#include <bits/stdc++.h>

using namespace std;

template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> ostream& operator<<(ostream &os, const T_container &v) { os << '{'; string sep; for (const T &x : v) os << sep << x, sep = ", "; return os << '}'; }
void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#ifdef LOCAL
#define dbg(...) cerr << "(" << #VA_ARGS << "):", dbg_out(VA_ARGS)
#else
#define dbg(...)
#endif

void winner() {
    float a,b,c,p,q,r,pass,maxv,minv,get,win;
    cin>>a>>b>>c>>p>>q>>r;
    
    pass=(p+q+r)/2.0;
    
    if(p+b+c>pass)
        cout<<"Yes"<<endl;
    else if(a+q+c>pass)
        cout<<"Yes"<<endl;
    else if(a+b+r>pass)
        cout<<"Yes"<<endl;
    
    else
        cout<<"No"<<endl;
   

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        
        // cout << "Case #" << t << ": ";
        winner();
    }
}
