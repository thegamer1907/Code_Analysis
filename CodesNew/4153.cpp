#include<bits/stdc++.h>
using namespace std;
long long pre[200005];
int n,m;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>pre[i];
        pre[i]+=pre[i-1];
    }
    long long sum=0;
    //cout<<lower_bound(pre,pre+n,5)-pre<<endl;
    while(m--)
    {
        long long add;
        cin>>add;
        sum+=add;
        if(sum>=pre[n])
            sum=0;
        cout<<n-(lower_bound(pre,pre+n,sum+1)-pre)+1<<endl;
    }
}
