#include <iostream>
using namespace std;

bool is_prime(int n) {
    if(n < 2) return false; // 0 and 1 are not prime numbers
    for(int i = 2; i <= n / i; i++) {
        if(n % i == 0) return false; // found a divisor, not prime
    }
    return true; // no divisors found, it is prime
}

int main() {
    int n;
    cin >> n;
    if(is_prime(n)) cout << n << " is a prime number." << endl;
    else cout << n << " is not a prime number." << endl;
    return 0;
}