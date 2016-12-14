// EulerChallenge7.cpp : Defines the entry point for the console application.
/*

By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?

*/

#include "stdafx.h"
#include <iostream>

using namespace std;


int main() {
	short index = 1;
	unsigned long primes[10001];
	primes[0] = 2;
	unsigned long numberToCheck = 3;
	while (index < 10001) {
		bool divisible = false;
		for (int c = 0; c < index; c++) {
			if (numberToCheck % primes[c] == 0) {
				divisible = true;
				break;
			}
		}
		if (!divisible)
			primes[index++] = numberToCheck;
		
		numberToCheck++;
	}
	cout << "The 10001th prime is " << primes[10000];

	cin >> index;
    return 0;
}

