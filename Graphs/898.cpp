#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
int a[N];
int n,t;
int flag = 0;
int dfs(int now)
{
    if(now > n-1) 
    {
        if(flag) return 1;
        else return 0;
    }
    int y = now+a[now];
    if(y == t) flag = 1;
    dfs(y);
}
int main ()
{
    cin>>n>>t;
    for(int i =1;i<=n-1;i++) cin>>a[i];
    if(dfs(1)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0 ;
}