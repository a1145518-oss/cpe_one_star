#include <bits/stdc++.h>
using namespace std;

int g(long long n){
    if (n < 10) return n;
    int sum = 0;
    while (n > 0){
        int digit = n % 10;
        sum += digit;
        n /= 10;
    }
    return g(sum);
}

int main(){
    long long n;
    while (cin >> n && n){
        cout << g(n) << '\n';
    }
    return 0;
}
