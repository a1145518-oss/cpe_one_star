#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

int main(){
    int a,b,d;
    int sum=0;
    scanf("%d",&d);
    for(int i=0;i<d;i++){
        sum=0;

        scanf("%d%d",&a,&b);
        for(int k=a;k<=b;k++){
            int n=k;

            if(n%2==1){
                sum+=n;
            }
        }
        printf("Case %d: %d\n",i+1,sum);
    }
    return 0;
}