#include<bits/stdc++.h>
#include<cstring>
#define ll long long
#define INF 1000000007
using namespace std;
int a[110];
int n,m;
int cal()
{
    while(m)
    {
        sort(a+1,a+1+n);
        a[1]++;
        m--;
    }
    sort(a+1,a+1+n);
    return a[n];
}
int main()
{

    cin>>n>>m;
    int maxn=0,minn=INF;
    int x;
    for(int i=1;i<=n;++i)
        cin>>a[i],maxn=max(maxn,a[i]),minn=min(minn,a[i]);
    if(n==1)
        cout<<a[1]+m<<' '<<a[1]+m<<endl;
    else
    cout<<cal()<<' '<<maxn+m<<endl;

    return 0;
}
