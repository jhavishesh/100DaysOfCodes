//Solution:

// C++ program to the nth prime number

#include <bits/stdc++.h>
using namespace std;

// initializing the max value
#define MAX_SIZE 1000005

void SieveOfEratosthenes(vector<int>& primes)
{
	
	bool IsPrime[MAX_SIZE];
	memset(IsPrime, true, sizeof(IsPrime));

	for (int p = 2; p * p < MAX_SIZE; p++) {
		// If IsPrime[p] is not changed, then it is a prime
		if (IsPrime[p] == true) {
			// Update all multiples of p greater than or
			// equal to the square of it
			// numbers which are multiple of p and are
			// less than p^2 are already been marked.
			for (int i = p * p; i < MAX_SIZE; i += p)
				IsPrime[i] = false;
		}
	}

	// Store all prime numbers
	for (int p = 2; p < MAX_SIZE; p++)
		if (IsPrime[p])
			primes.push_back(p);
}
