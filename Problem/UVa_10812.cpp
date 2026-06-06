#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int s,d;
        cin>>s>>d;
        int a=(s+d)/2;
        int b=s-a;
        if((s+d)&1){
            cout<<"impossible"<<endl;
        }
        else if(b<0){
            cout<<"impossible"<<endl;
        }
        else{
            cout<<a<<" "<<b<<endl;
        }
    }
}
