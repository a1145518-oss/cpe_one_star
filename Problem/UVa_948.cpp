#include <stdlib.h>
#include <stdio.h>
#pragma warning(disable:4996)
#define ll long long int

ll fa[43]={0};
ll f(int n){
    if(n<=1)return n;
    if(!fa[n]) fa[n]=f(n-1)+f(n-2);
    return fa[n];
}
int main(){
    int n;
    ll t=f(42);
    scanf("%lld",&t);
    while(t--){
        scanf("%d",&n);
        bool b=0;
        printf("%d = ",n);
        for(int i=42;i>=2;i--){
            if(fa[i]<=n){
                printf("1");
                b=1;
                n-=fa[i];
            }
            else if(b) printf("0");
        }
        printf(" (fib)\n");
    }
    return 0;
}