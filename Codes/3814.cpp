/*Template by hemnath_d(Enlightened by chamow)*/
#include<bits/stdc++.h>
using namespace std;
/*--------------------------------------------*/
typedef long long ll;
typedef long double ld;
typedef vector<ll> vec;
typedef vector<int> vi;
/*--------------------------------------------*/
#define fastread ios_base::sync_with_stdio(false); cin.tie(NULL);
#define pb push_back
#define mp make_pair
#define forw(i,a,n) for(i=a;i<=n;i++)
#define rev(i,a,n) for(i=a;i>=n;i--)
#define For(i,a,n) for(i=a;i<n;i++)
#define Rev(i,a,n) for(i=a;i>n;i--)
#define inf 100000000000000
#define minf -1000000000000
/*--------------------------------------------*/
//Variables and functions for graph
//Undirected graph
vec adj[100000];
bool visited[100000]={false};
void add_edge(vec adj[],ll a,ll b)
{
    adj[a].pb(b);
    adj[b].pb(a);
}
/*--------------------------------------------*/
string s;
ll ns,nb,nc,ps,pb,pc,rub;
ll c=0,b=0,si=0;
ll check(ll x)
{
    //cout<<b<<" "<<c<<" "<<si<<endl;
    ll temp=rub;
    ll t1=x*b;
    ll t2=x*c;
    ll t3=x*si;
    t1-=nb;
    t2-=nc;
    t3-=ns;
    if(t1>0)
    {
        temp-=(t1)*pb;
    }
    if(t2>0)
    {
        temp-=(t2)*pc;
    }
    if(t3>0)
    {
        temp-=(t3)*ps;
    }
    //cout<<t1<<" "<<t2<<" "<<t3<<" "<<temp<<endl;
    if(temp>=0)
        return 1;
    else
        return 0;
}
int main()
{
    fastread;
    cin>>s;
    cin>>nb>>ns>>nc>>pb>>ps>>pc>>rub;
    ll i;
    For(i,0,s.size())
    {
        if(s[i]=='B')
            b++;
        else if(s[i]=='C')
            c++;
        else
            si++;
    }
    ll lo=0,hi=inf;
    ll mid;
    while(lo<hi)
    {
        mid=(lo+hi+1)/2;
        if(check(mid)==1)
            lo=mid;
        else
            hi=mid-1;
    }
    cout<<lo<<endl;
    return 0;
}
