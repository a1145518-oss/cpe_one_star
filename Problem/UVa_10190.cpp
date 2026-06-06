#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    while (cin >> a >> b) {
        if (a == 0 or b == 0 or a == 1 or b == 1) {
            cout << "Boring!" << endl;
            continue;
        }
        vector <int> v;
        int flag = 1;
        while (a != 1) {
            if (a % b != 0) {
                flag = 0;
                break;
            }
            v.push_back(a);
            a /= b;
        }
        v.push_back(1);
        if (flag) {
            cout << v[0];
            for (int i = 1; i < v.size(); i++) {
                cout << " " << v[i];
            }
            cout << endl;
        } else {
            cout << "Boring!" << endl;
        }
    }
    return 0;
}