#include <bits/stdc++.h>

using namespace std;
long long n,m,k;
bool valid(long long r)
{
    long long cnt=0;
    for(int i=1;i<=n;i++) cnt+=min((r-1)/i,m);
    return cnt<=k;
}
long long bs()
{
    long long s=1,e=1e12,mid;
    while(s<e)
    {
        mid=(s+e+1)/2;
        if(valid(mid)) s=mid;
        else e=mid-1;
    }
    return s;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m>>k;
    k--;
    cout<<bs()<<endl;
    return 0;
}
