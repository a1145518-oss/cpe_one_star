#include <bits/stdc++.h>
using namespace std;

int main(){
    string a, b;
    while (getline(cin, a)){
        getline(cin, b);
        
        vector <int> freqA(26), freqB(26);
    
        for (char& ch : a) freqA[ch - 'a']++;
        for (char& ch : b) freqB[ch - 'a']++;
        
        string result;
        for (int i = 0; i < 26; i++){
            int common = min(freqA[i], freqB[i]);
            for (int j = 0; j < common; ++j){
                result += 'a' + i;
            }
        }
        
        cout << result << '\n';
    }
    return 0;
}
