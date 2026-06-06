#include <bits/stdc++.h>
#define int long long int
using namespace std;

signed main() {
    bitset <1000001> isPrime;
    isPrime.set();
    for (int i = 2; i <= 1001; i++) {
        if (isPrime[i]) {
            for (int j = 2 * i; j <= 1000000; j += i) {
                isPrime[j] = 0;
            }
        }
    }
    int n;
    while (cin >> n) {
        string str = to_string(n);
        reverse(begin(str), end(str));
        int u = stoi(str);
        if (!isPrime[n]) {
            cout << n << " is not prime." << endl;
        } else if (u == n or !isPrime[u]) {
            cout << n << " is prime." << endl;
        } else {
            cout << n << " is emirp." << endl;
        }
    }
    return 0;
}
