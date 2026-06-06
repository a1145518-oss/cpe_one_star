#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int main() {
	string number;
	while (cin >> number && number != "0") {
		int realnumber[number.size()] = { 0 };
		int sum = 0;
		//將字串轉成數字
		for (int i = number.size()-1;i>=0;i--) {
			realnumber[i] = number[i] - '0';//減去'0'是因為字串的每個元素都是ASCII碼，要轉成數字要減去'0'的ASCII碼
		}
		//判斷是否為11 奇數位+ 偶數位-  sum=0 //個位數在最低位
		for (int i = 0;i < number.size() ;i++) {
			if (i % 2 == 0) sum -= realnumber[i];
			else sum += realnumber[i];
		}if (sum%11==0 ) {
			cout << number << " is a multiple of 11." << endl;
		 }else {
			cout << number << " is not a multiple of 11." << endl;

		  }
	}
	return 0;
}
