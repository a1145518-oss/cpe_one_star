#include <bits/stdc++.h>
using namespace std;

int gcd (int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        string str1, str2;
        cin >> str1 >> str2;
        int d1 = stoi(str1, nullptr, 2), d2 = stoi(str2, nullptr, 2);
        if (gcd(d1, d2) == 1) {
            cout << "Pair #" << i << ": Love is not all you need!" << endl;
        } else {
            cout << "Pair #" << i << ": All you need is love!" << endl;
        }
    }

    return 0;
}