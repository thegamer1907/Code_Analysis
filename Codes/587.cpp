#include <iostream>
#include<cstdio>
#include<algorithm>
#include<queue>
#include<cstring>
#include<string>
using namespace std;
const int MAX=1e5+10;
char str[MAX];
vector<long long> V;
void dfs(long long now,int num,int ceng){
    if(num==0){
        while(ceng<10){
            V.push_back(now);
            now*=10;
            ceng++;
        }
        return;
    }
    if(ceng>=10){
        return;
    }
    for(int i=0;i<=min(num,9);i++){
        if(ceng==0 && i==0) continue;
        dfs(now*10+i,num-i,ceng+1);
    }
}
int main(){
    dfs(0,10,0);
    sort(V.begin(),V.end());
    int i;
    cin>>i;
    cout<<V[i-1];
}
