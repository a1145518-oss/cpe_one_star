#include <bits/stdc++.h>  
using namespace std;  
int main() {  
    long long a,b, days;
    while(cin>>a>>b){
        days=a,b-=a; 
        // 將days初始化為初始數量a 
        // 從b減去初始數量a（b現在是剩餘的數量）
        while(b > 0){
            days++; // 天數計數器加1 
            b-=days; // 將b減去當前的天數
        }
        cout<<days<<endl;
    }
    return 0;
}