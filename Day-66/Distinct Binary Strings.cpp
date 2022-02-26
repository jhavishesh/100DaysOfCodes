//https://www.codechef.com/problems/BINSTRING/

#include <bits/stdc++.h>

using namespace std;
#pragma GCC optimize("O1")
#pragma GCC optimize("O2")
 #pragma GCC optimize("O3")
 #pragma GCC optimize("Os")
 #pragma GCC optimize("Ofast")
 
#pragma GCC target("avx,avx2,fma")
 
 
template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> ostream& operator<<(ostream &os, const T_container &v) { os << '{'; string sep; for (const T &x : v) os << sep << x, sep = ", "; return os << '}'; }
void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#ifdef LOCAL
#define dbg(...) cerr << "(" << #VA_ARGS << "):", dbg_out(VA_ARGS)
#else
#define dbg(...)
#endif
typedef long double LD;
typedef long long LL;
typedef int64_t I64;
#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()

#define LSB(i) ((i) & -(i))
 

const int MAX_N = 1e5 + 5;
const ll INF = 1e9;
const ld EPS = 1e-9;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        int n;
        cin>>n;
        string str;
        cin>>str;
        char curr= '#';
        int grp(0);

        for(int i=0;i<n;i++)
        {
            if(curr=='#')
            {
                curr=str[i];
                grp++;
            }
            
            else if(curr!=str[i])
            {
                curr=str[i];
                grp++;
            }
                
        }
        cout<<grp<<endl;
    }
    }

