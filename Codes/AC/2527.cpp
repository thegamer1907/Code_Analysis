#include<bits/stdc++.h>
using namespace std;
const int N=10000000;
bool vis[N+3];
vector<int> prime;
int cnt[1000000],a[1000005],n,sum[1000000],len,u;
void init()
{
    len=0;
    u=0;
    vis[0]=vis[1]=true;
    int up=floor(sqrt(N)+0.5);
    for(int i=2;i<=N;i++)
    {
        if(!vis[i])
        {
            len++;
            if(i<=up) u=len;
            prime.push_back(i);
            for(int j=2*i;j<=N;j+=i) vis[j]=true;
        }
    }
}
void work(int w)
{
    //printf("%d****\n",w);
    for(int i=0;i<u;i++)
    {
        int now=prime[i];
        if(w%now==0)
        {
            cnt[i]+=1;
            //cout<<now<<endl;
            while(w%now==0) w/=now;
        }
    }
    if(w>1)
    {
        //cout<<w<<endl;
        int item=lower_bound(prime.begin(),prime.end(),w)-prime.begin();
        cnt[item]+=1;
    }
}
int main()
{
    init();
    //cout<<prime[len-1]<<endl;
    scanf("%d",&n);
    for(int i=1;i<=n;i++) scanf("%d",&a[i]);
    int len=prime.size();
    for(int i=1;i<=n;i++)
    {
        work(a[i]);
    }
    sum[0]=cnt[0];
    for(int i=1;i<len;i++) sum[i]=sum[i-1]+cnt[i];
    //cout<<prime[0]<<endl;
    int q; scanf("%d",&q);
    while(q--)
    {
        int l,r;
        scanf("%d%d",&l,&r);
        int x=lower_bound(prime.begin(),prime.end(),l)-prime.begin();
        if(x==len)
        {
            puts("0");
            continue;
        }
        int y=lower_bound(prime.begin(),prime.end(),r)-prime.begin();
        if(y==len) y=len-1;
        if(prime[y]>r) y-=1;
        //for(int i=x;i<=y;i++) printf("%d ",prime[i]);
        //puts("****");
        int ans=0;
        if(x>0) ans=sum[y]-sum[x-1];
        else ans=sum[y];
        printf("%d\n",ans);
    }
    return 0;
}
