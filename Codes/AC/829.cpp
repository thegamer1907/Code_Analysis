#include<bits/stdc++.h>
#define prArr(Arr,n) for(int _=0;_<n;_++)   cout<<(Arr)[_]<<" ";
using namespace std;
const int INF=(int)1e9+10;
const int MOD=(int)1e9+7;
int solve(int,long long);
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n,k;        cin>>n>>k;
    cout<<solve((int)n,k);
    return 0;
}

int solve(int n,long long pos)
{
    long long sz=1LL<<n;
    if(pos==sz/2)
        return n;
    if(pos<sz/2)
        return solve(n-1,pos);
    return solve(n-1,sz-pos);
}
