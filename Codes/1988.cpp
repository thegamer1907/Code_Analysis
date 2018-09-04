#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,k,tot,cnt[31][N],top,w[N],res;
vector<int> vec[N];
map<int,int> mp;
int main()
{
    long long ans=0; top=1;
    scanf("%d%d",&n,&k);
    for(int i=1;i<=n;i++)
    {
        int x; scanf("%d",&x);
        if(x==0)
        {
            res++;
            continue;
        }
        int now=x;
        while(now%k==0 && k!=1) now/=k;
        int item=mp[now];
        if(!item)
        {
            vec[top].push_back(x/now);
            mp[now]=top++;
        }
        else vec[item].push_back(x/now);
    }
    for(int u=1;u<top;u++)
    {
        int up=vec[u].size();
        if(up<3) continue;
        if(k==1)
        {
            for(int i=2;i<=up-1;i++)
                ans+=(long long)(i-1)*(up-i);
            continue;
        }
        for(int i=0;i<up;i++)
            for(int j=0;j<=30;j++) cnt[j][i]=0;
        for(int i=0;i<up;i++)
        {
            if(i>0) for(int j=0;j<=30;j++) cnt[j][i]=cnt[j][i-1];
            int now=vec[u][i],num=0;
            while(now%k==0) now/=k,num++;
            cnt[num][i]++; w[i]=num;
        }
        for(int i=0;i<up;i++)
        {
            if(!w[i]) continue;
            ans+=(long long)cnt[w[i]-1][i]*(cnt[w[i]+1][up-1]-cnt[w[i]+1][i]);
        }
    }
    for(long long i=1;i<=res;i++) ans+=(i-1)*(res-i);
    printf("%lld\n",ans);
    return 0;
}
