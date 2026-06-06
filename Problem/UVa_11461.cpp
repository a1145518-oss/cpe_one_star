#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,m,cot;
    while(cin>>n>>m){
        cot=0;
        if(n==0 && m==0){
            break;
        }
        for(int i=n;i<=m;i++){
            if((int)sqrt(i)*(int)sqrt(i)==i){//
                cot++;
            }
        }
        cout<<cot<<endl;
    }
}