#include <bits/stdc++.h>

using namespace std;
int f[22222],n,m;

int main(){
    cin>>n>>m;
    memset(f, -1, sizeof f);
    queue<int> q;
    q.push(n); f[n] = 0;
    while(!q.empty()){
        n = q.front(); q.pop();
        if (n==m) {cout<<f[m]; return 0;}
        if (n<m && f[n*2]<0){
            f[n*2] = f[n]+1;
            q.push(n*2);
        }
        if (n>0 && f[n-1]<0){
            f[n-1] = f[n]+1;
            q.push(n-1);
        }
    }
}
