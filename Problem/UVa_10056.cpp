#include <bits/stdc++.h>
using namespace std;

int main()
{
	int j, k;
	int s, n, i;
	double p, ans;
	
	cin >> s;
	
	for (j=0;j<s;j++) {
		cin >> n >> p >> i;
		
		if (p < 1e-9) {  // 浮點數不一定準 
			cout << 0.0000 << endl;
			continue;
		}
		
		ans = (p * pow((1-p), i-1)) / (1 - pow((1-p), n));
		
		cout << fixed << setprecision(4) << ans << endl; 
	}

	return 0;
}