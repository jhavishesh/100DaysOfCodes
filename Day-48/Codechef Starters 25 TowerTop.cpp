/* https://www.codechef.com/START25B/problems/TOWERTOP */

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

#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;



void TowerTop() 
{
    long long x,m;  
    
    cin>>x>>m;

  
  ll tempt = 2;
  ll cntt  = 0;
  while(tempt<=x){
    tempt<<=1;
    cntt++;
  }
  tempt/=2;
  long long one = cntt+1;
  
  if(one>m){
    cout<<0<<"\n";return;
  }
  if(tempt==x){
    cout<<1 + (m-one)<<"\n";
  }else{
    cout<<(m-one)<<"\n";
  }
    
}
    

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = -1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        
        // cout << "Case #" << t << ": ";
        TowerTop();
    }
}
