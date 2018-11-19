#include <bits/stdc++.h>
using namespace std;
int n,k,flag,now,usd[10000001];
int main(){
    cin>>n>>k;
    for (int i=1; i<=n; i++){
        flag=0;
        for (int j=1; j<=k; j++){
            cin>>now;
            flag=flag*2+now;
        }
        usd[flag]=1;
        for (int j=0; j<(1<<k); j++)
            if (usd[j]&&(j&flag)==0) return cout<<"YES", 0;
    }
    cout<<"NO";
}
