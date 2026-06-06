#include<bits/stdc++.h>
using namespace std;

int main(){
    map<string,int> mp ;//用map來存每個國家出現的次數，key是國家名稱，value是次數
    int n;
    while(cin>>n){
        string line,s;
        cin.ignore();//忽略掉上一行的換行符號，因為getline會讀到換行符號，導致讀取不到下一行的輸入
        for(int i=0;i<n;i++){
            getline(cin,line);
            stringstream ss(line);//用stringstream把line分割成一個個字串
            ss>>s;
            mp[s]++;
        }
        for(auto it:mp){//auto it:mp是用來遍歷map的每一個元素，it.first是key，it.second是value
            cout<<it.first<<" "<<it.second;
            cout<<"\n";
        }
    }
    return 0;
}