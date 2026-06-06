#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <sstream>
#define haku author
using namespace std;

int main() {
    int c = 1, n, tmp; string str;
    while (getline(cin, str)) {
        // 這題有趣的是，zeroJudge上面，兩個test case之間是沒有blank line的，但瘋狂程設跟Virtual Judge都有XD
        // 所以我這樣寫: 
        if (str == "") continue;
        n = stoi(str);
        
        bool b2 = true;
        vector<int> seq;
        
        getline(cin, str);
        stringstream ss(str);
        for (int i = 0; i < n; i++) {
            ss >> tmp;
            // 判斷吃進來的數字是不是小於1，小於1的話就不是B2-Sequence
            if (tmp < 1) {
                b2 = false; break;
            }
            // 判斷是不是嚴格遞增數列
            if (i > 0 && tmp < seq[i - 1]) {
                b2 = false; break;
            }
            seq.push_back(tmp);
        }
        
        if (b2) {
            // 用set存兩個數字相加後的值
            set<int> pairSum;
            for (int i = 0; i < seq.size() && b2; i++) {
                for (int j = i; j < seq.size(); j++) {
                    tmp = seq[i] + seq[j];
                    
                    // 判斷set裡面是否有重複值，有重複的話就不是B2-Sequence
                    if (pairSum.count(tmp)) {
                        b2 = false; break;
                    }
                    else pairSum.insert(tmp);
                }
            }
        }
        
        cout << "Case #" << c << ": ";
        if (b2) cout << "It is a B2-Sequence." << endl;
        else cout << "It is not a B2-Sequence." << endl;
        cout << endl;
        c++;
    }
    return 0;
}
