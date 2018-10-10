//written by Aman Mishra(aspro)
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,s,e) for(ll i=s;i<=e;i++)
#define aspro ios_base::sync_with_stdio(0);cin.tie(0);
#define pb push_back
#define pii pair<int,int>
#define INF 10000000000000
#define MOD 1000000007
#define test int t;cin>>t;while(t--)
ll nb,ns,nc,b,s,c,M,pb,ps,pc;
bool check(ll x)
{
    ll breq=x*nb;
    ll sreq=x*ns;
    ll creq=x*nc;
    ll bmore=breq - b;
    ll smore=sreq - s;
    ll cmore=creq - c;
    ll mon=0LL;
    if(bmore>0) mon+=pb*bmore;
    if(smore>0) mon+=ps*smore;
    if(cmore>0) mon+=pc*cmore;
    if(mon<=M) return 1;
    return 0;
}
int main()
{
    aspro
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    string str;
    cin>>str;
    int l=str.size();
    f(i,0,l-1)
    {
        if(str[i]=='B') nb++;
        if(str[i]=='S') ns++;
        if(str[i]=='C') nc++;
    }
    cin>>b>>s>>c;
    cin>>pb>>ps>>pc;
    cin>>M;
    ll u=0,v=INF,ans=0;
    while(u<=v)
    {
        ll mid=(u+v)/2;
        bool f=check(mid);
        //cout<<mid<<" "<<f<<endl;
        if(f)
        {
            ans=mid;
            u=mid+1;
        }
        else v=mid-1;
    }
    cout<<ans<<endl;

}

