/* https://www.codechef.com/COOK137C/problems/MEANMAX */


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



void meanmax() {
    ll n;cin>>n;
    vector<ll> a(n);
    double sum = 0;
    for(ll i=0;i<n;i++) {
        cin>>a[i];sum+=a[i];
    }sort(all(a));
    sum-=a[n-1];
    double ans = sum/(n-1);
    ans+=a[n-1];
    cout<<fixed<<setprecision(6)<<ans<<"\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
  
        // cout << "Case #" << t << ": ";
        meanmax();
    }
}
