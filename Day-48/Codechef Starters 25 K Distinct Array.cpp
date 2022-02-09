/* https://www.codechef.com/START25B/problems/DISTK */

//Solution:

#include <bits/stdc++.h>
using namespace std;

#define ll long long

signed main(){

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif



    int tccc= 0, ttee = 1;
    cin >> ttee;
    while (tccc++ < ttee)
    {

        ll n1, k1;
        cin >> n1 >> k1;
        vector<ll> array(1, 1);
        k1 -= n1;

        ll curr = 2;

        for (int i = 2; i <= n1; i++) {
            if (k1 < array.size()) {
                int val = array[array.size()- k1- 1];
                array.push_back(val);
                break;
            }
            k1 -= array.size();
            array.push_back(curr);
            curr++;
        }

        while (array.size() < n1) {
            array.push_back(array.back());
        }

        for(auto x: array){
            cout << x << " ";
        }cout << endl;







    }

    return 0;
}

