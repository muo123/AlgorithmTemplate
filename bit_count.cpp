#include <iostream>
using namespace std;

int bit_count(int x) {
    int cnt = 0;
    while(x) {
        cnt++;
        x &= (x-1); // clear the least significant bit set
    }
    return cnt;
}

int main() {
    int n;
    while(cin >> n) {
        cout << bit_count(n) << '\n';
    }
}