#include<bits/stdc++.h>
using namespace std;

void num(long long n){//用void是因為這個函式不需要回傳值
    if(n>=10000000){
        num(n/10000000);
        cout<<" kuti";
        n%=10000000;
    }
    if(n>=100000){
        num(n/100000);
        cout<<" lakh";
        n%=100000;
    }
    if(n>=1000){
        num(n/1000);
        cout<<" hajar";
        n%=1000;
    }
    if(n>=100){
        num(n/100);
        cout<<" shata";
        n%=100;
    }
    if(n){
        cout<<" "<<n;
    }
}
int main(){
    long long a,kase=1;
    while(cin>>a){
        cout<<setw(4)<<kase++<<".";//set width是用來設定輸出的寬度，這裡是4，意思是輸出時至少要佔4個字元，如果不足4個字元就會在前面補空格
        if(a){
            num(a);//如果a不為0，就呼叫num函式來輸出a的孟加拉數字表示法
        }
        else{
            cout<<" 0";
        }
        cout<<endl;
    }
    return 0;
}
