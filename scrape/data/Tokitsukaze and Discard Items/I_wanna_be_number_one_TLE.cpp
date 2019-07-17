#include<bits/stdc++.h>
#define fu(i,r,t) for(int i=r;i<=t;i++)
#define fd(i,r,t) for(int i=r;i>=t;i--)
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
using namespace std;
const int INF=1e17+5;
const int maxn=1e5+5;
int n,m,a[maxn],b[maxn],ans,sum;
multiset<int>T;

int32_t main()
{
    IOS;
    int k;
    cin>>n>>m>>k;
    fu(i,1,m)
    {
        int x;
//        cin>>a[i];
        cin>>x;
        T.insert(x);
    }
    int nk=k;
    while(!T.empty())
    {
        auto i=T.upper_bound(nk);
        auto be=T.begin();
        int that=*i;
        if(i==be){
            nk+=k;
//            nk+=max((long long)0,((that-nk)-1)/k)*k;
            nk+=((that-nk)-1)/k*k;
            continue;
        }

        int dis=distance(be,i);
        nk+=dis;
        while (dis--)
        {
            T.erase(T.begin());
        }
        ans++;
    }
    cout<<ans;

    return 0;
}