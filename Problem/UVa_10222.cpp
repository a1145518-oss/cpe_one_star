#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1 = "qwertyuiopasdfghjklzxcvbnm";
    string str2 = "ertyuiop[]dfghjkl;'cvbnm,."; 

    string s;
    getline(cin, s);

    for (int i = 0; i < s.length(); i++){
        char c = s[i];
        if ('A' <= c && c <= 'Z') {
            c += 32;
        }
        int pos = str2.find(c);
        
        if (pos != -1) {
            cout << str1[pos];
        } else {
            cout << c;
        }
    }

    cout << endl;
    return 0;
}
