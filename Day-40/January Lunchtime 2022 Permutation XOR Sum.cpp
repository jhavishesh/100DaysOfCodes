/* https://www.codechef.com/LTIME104C/problems/PERMXORSUM */

//Solution:

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<ll>
int main()
{

    int uhi;
    cin>>uhi;
    while(uhi--)
    {
        ll i, j, vgu, m;
        cin >> vgu;
        vi v(vgu);
        iota(v.begin(), v.end(), 1);
        set<ll, greater<ll>> s(v.begin(), v.end());
        ll ans = 0;
        while (s.size() > 1)
        {
            ll a = *s.begin();
            ll allbits = log2(a) + 1;
            ll b = (1 << allbits) - 1;
            if (a ^ b){
                s.erase(a);
                s.erase(b ^ a);
                ans += b * 2;
            }
            else{
                s.erase(a);
            }
        }
        cout << ans << endl;
    }
}
