#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,total,minn,cot,x;
    int cost[36],cheat[36];
    cin>>t;
    for(int k=1;k<=t;k++){
        memset(cost,0,sizeof cost);
        if(k>1){
            cout<<"\n";
        }
        cout<<"Case "<<k<<":"<<endl;
        for(int i=0;i<36;i++){
            cin>>cost[i];
        }
        cin>>n;
        while(n--){
            cin>>x;
            minn=2000000005;
            cot=0;
            for(int base=2;base<=36;base++){
                total=0;
                int temp=x;
                while(temp>0){
                    total+=cost[temp%base];
                    temp/=base;
                }
                if(total<minn){
                    minn=total;
                    cot=1;
                    cheat[0]=base;
                }
                else if(total==minn){
                    cheat[cot++]=base;
                }
            }
            cout<<"Cheapest base(s) for number "<<x<<":";
            for(int i=0;i<cot;i++){
                cout<<" "<<cheat[i];
            }
            cout<<"\n";
        }
    }
    return 0;
}
