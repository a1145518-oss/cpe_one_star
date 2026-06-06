#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    while(cin>>n && n!=0){
        string a;
        long long cot=0;
        while(n!=0){
            if(n%2==0){
                a.push_back('0');
            }
            else{
                a.push_back('1');
                cot++;
            }
            n/=2;
        }
        reverse(a.begin(),a.end());
        cout<<"The parity of "<<a<<" is "<<cot<<" (mod 2)."<<endl;
    }
    return 0;
}