// https://practice.geeksforgeeks.org/contest/gfg-mega-contest-qualification-round/problems/ 


//Solution:

#include <bits/stdc++.h>
using namespace std;


int main() {

    int tc; //for the test cases 
    cin >> tc;

    while (tc--) {
        long long x,y;  
        cin >> x >> y; //reading a and b
        
        if (x >= y) {
            cout << x - y << "\n";  //if x > y then simply return the difference 
        }
        else if (y == (x | y)) {   // if y==x|y then return 1
            cout << "1\n";
        }
        else if (y == x + 1) {    // if y == x + 1 then return 1
            cout << "1\n";
        }
        else if (y == ((x + 1) | y)) {   //  if (x + 1) | y  then return 2
            cout << "2\n";
        }
        else if (x + 2 == y) {          // if (x + 2 == y then return 2
            cout << "2\n";
        }
        else if (y - 1 == (x | (y - 1))) {
            cout << "2\n";
        }
        else if (y + 1 == (x | (y + 1))) {    // lastly we have the value of (y + 1 == (x | (y + 1 )))return 2
            cout << "2\n";
        }
        else
            cout << "3\n";

   
    }

    return 0;//returning to the main function
}
