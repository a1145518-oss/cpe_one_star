#include<bits/stdc++.h>
using namespace std;
int n;
int GCD(int a,int b){
    while(a!=0 && b!=0){
        if(a>=b){
            a=a%b;
        }
        else if(b>a){
            b=b%a;
        }
    }
    if(a>=b){
        return a;
    }
    else{
        return b;
    }
}
int main(){
    while(cin>>n &&n!=0){
        int G=0;
        for(int i=1;i<n;i++){
            for(int j=i+1;j<=n;j++){
                G+=GCD(i,j);
            }
        }
        cout<<G<<endl;
    }
}
