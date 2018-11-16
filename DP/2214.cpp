#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll c[1000005] = {0},a[100005],last[100005] = {0},ans[100005];
int n,m;
int lowbit(int x)
{
    return x&-x;
}
int sum(int cur)
{
    int ret = 0;
    while(cur>0)
    {
        ret += c[cur];
        cur -= lowbit(cur);
    }
    return ret;
}
void add(int cur,int x)
{
    while(cur<=n)
    {
        c[cur] += x;
        cur += lowbit(cur);
    }
    return ;
}
int main()
{

    cin >> n >> m;
    for(int i=1;i<=n;++i)
    {
        cin >> a[i];
    }
    reverse(a+1,a+1+n);
    for(int i=1;i<=n;++i)
    {
        add(i,1);
        if(last[a[i]]!=0)add(last[a[i]],-1);
        ans[i] = sum(i);
        last[a[i]] = i;
    }
    for(int i=1;i<=m;++i)
    {
        int t;
        cin >> t;
        cout << ans[n-t+1] << endl;
    }

    return 0;
}
