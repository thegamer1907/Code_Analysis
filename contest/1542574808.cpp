#include<bits/stdc++.h>
#define maxn 50
using namespace std;
int dd[maxn],n,MAX,k;
int getbit(int x,int i)
{
        return (x>>(i-1))&1;
}
int main()
{
        //freopen("868C.inp","r",stdin);
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        cin>>n>>k;
        MAX=(1<<k)-1;
        for (int i=1;i<=n;++i)
        {
                int now=0;
                for (int j=1;j<=k;++j)
                {
                        int x;
                        cin>>x;
                        if (x) now+=1<<(j-1);
                }
                dd[now]=1;
        }
        for (int i=0;i<=MAX;++i)
        if (dd[i])
        {
                for (int j=0;j<=MAX;++j)
                if (dd[j])
                {
                        int ok=1;
                        for (int s=1;s<=k;++s)
                        {
                                int x=getbit(i,s);
                                int y=getbit(j,s);
                                if(x==y&&x==1)
                                {
                                        ok=0;
                                        break;
                                }
                        }
                        if (ok)
                        {
                                cout<<"YES";
                                return 0;
                        }
                }
        }
        cout<<"NO";
        return 0;
}
