// https://www.geeksforgeeks.org/common-divisors-of-n-numbers/

//Solution:

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
 
// Function to print all the
// common divisors
void printAllDivisors(int arr[], int N)
{
    // Variable to find the gcd
    // of N numbers
    int g = arr[0];
 
    // Set to store all the
    // common divisors
    set<int> divisors;
 
    // Finding GCD of the given
    // N numbers
    for (int i = 1; i < N; i++) {
        g = gcd(arr[i], g);
    }
 
    // Finding divisors of the
    // HCF of n numbers
    for (int i = 1; i * i <= g; i++) {
        if (g % i == 0) {
            divisors.insert(i);
            if (g / i != i)
                divisors.insert(g / i);
        }
    }
 
    // Print all the divisors
    for (auto& it : divisors)
        cout << it << " ";
}
