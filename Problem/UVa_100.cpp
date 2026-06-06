#include  <stdio.h>
#include  <stdlib.h>
#pragma warning(disable:4996)

int main(){
    int i=0,j=0;
    while(scanf("%d %d",&i,&j)!=EOF){//輸入i和j，直到EOF
        int counter=0;
        int max=0;
        int temp=0;
        printf("%d %d",i,j);
        if(i>j){
            temp = i;
            i = j;
            j = temp;
        }
        for(int k=i;k<=j;k++){//從i到j的每個數字都要算一次
            int p=k;//每次算完一個數字後，p都要重置成k
            counter=1;
            while (p!=1){
                if(p%2==0){
                    p=p/2;
                }
                else{
                    p=3*p+1;
                }
                counter++;
            }
            if(counter>max){
                max=counter;
            }
        } 
        printf(" %d\n",max);
        }
        return 0;
}
