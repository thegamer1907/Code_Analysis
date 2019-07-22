#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int maxn=1e5+10;
ll p[maxn],n,m,k;

int main()
{
    cin>>n>>m>>k;
    for(int i=0;i<m;i++)
        cin>>p[i];
    int sum=0,ans=0;
    int i=0;
    while(i<m)
    {
        int x=p[i]-sum;
        int e=x/k*k+k*(x%k==0?0:1);
        //cout<<i<<" "<<p[i]<<" "<<e<<endl;
        ans++;
        int tmp=sum;
        while(i<m&&p[i]-tmp<=e)
        {
            i++;
            sum++;
        }
        //cout<<i<<" "<<p[i]-tmp<<" "<<e<<endl;
    }
    cout<<ans<<endl;
}