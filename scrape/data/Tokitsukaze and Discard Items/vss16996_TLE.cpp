#include<bits/stdc++.h>
#define ll          long long
#define dl          double
#define pb          push_back
#define eb          emplace_back
#define mp          make_pair
#define F           first
#define S           second
#define endl        "\n"
#define rep(i,a,b)  for(i=a;i<b;i++)
#define all(v)      v.begin(),v.end()
#define allr(v)     v.rbegin(),v.rend()
#define mod         1000000007
#define CIN(V,s,n)  for(int i=s;i<n;i++){cin >> V[i];}
#define COUT(V,s,n) for(int i=s;i<n;i++){cout <<  V[i] << " ";}
#define fast        ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define CLEAR(V);   for(ll i=0;i<V.size();i++) V[i] = 0;
#define N           100005
using namespace std;

bool SbS(const pair<int,int> &a,const pair<int,int> &b)
{return (a.second < b.second);}

ll SUMD(ll n);
ll BS(vector<ll> &PS,ll s,ll e,ll ser);
ll MI(ll a, ll m);
bool P[N];
void Sieve(int n=N);
int nCrModp(int n, int r, int p);
vector<ll> PF(ll n);

int main()
{
fast;
ll t=1;
//cin >> t;
while(t--)
{
    //string st="abcdefghijklmnopqrstuvwxyz",s1;
    ll n,m,p,k,i,j,l,t1,r,u,x,y,a,b,c,d,q,flag,x1,x2,y1,y2;
    cin >> n >> m >> k;
    priority_queue<ll,vector<ll> , greater<ll> > PQ;
    for(i=0;i<m;i++)
    {
        cin >> x;
        PQ.push(x);
    }
    ll k1 = k;
    ll dlt=0,t_dlt=0;
    ll op=0;
    while(!PQ.empty())
    {
        x = PQ.top();
        PQ.pop();
        if((x-dlt)<=k)
        {
            t_dlt++;
        }
        else
        {
            if(t_dlt!=0)
                op++;
            dlt += t_dlt;
            t_dlt = 0;
            if((x-dlt)<=k)
            {
                t_dlt++;
            }
            else
            {
                while( (x-dlt) > k)
                {
                    k += k1;
                }
                if((x-dlt)<=k)
                {
                    t_dlt++;
                }
            }
        }
    }

    cout << op+1;
}
    return 0;
}




ll SUMD(ll n)
{   ll sum=0;
    while(n>0){sum += n%10;n = n/10;}
    return sum;
}

ll BS(vector<ll> &PS,ll s,ll e,ll ser)
{
    if(s>e)
        return s;
    ll mid = (s+e)/2;
    if(PS[mid]==ser)
    {
        return mid;
    }
    else if(PS[mid] > ser)
    {
        return BS(PS,s,mid-1,ser);
    }
    else
        return BS(PS,mid+1,e,ser);
}
ll MI(ll a, ll m)
{
    ll m0 = m;
    ll y = 0, x = 1;
    if (m == 1)
      return 0;
    while (a > 1)
    {
        ll q = a / m;
        ll t = m;
        m = a % m, a = t;
        t = y;
        y = x - q * y;
        x = t;
    }
    if (x < 0)
       x += m0;
    return x;
}

void Sieve(int n)
{
    memset(P,true,sizeof(P));
    P[0] = false;
    P[1]= false;
    for(ll i=2;i*i<=n;i++)
    {
        if(P[i])
        {
            for(ll j=i*i;j<=n;j+=i)
            {
                P[j]=false;
            }
        }
    }

}

int nCrModp(int n, int r, int p)
{
    int C[r+1];
    memset(C, 0, sizeof(C));

    C[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = min(i, r); j > 0; j--)

            C[j] = (C[j] + C[j-1])%p;
    }
    return C[r];
}

vector<ll> PF(ll n)
{
    vector<ll> pf;
    if(n%2==0)
    {
        pf.pb(2LL);
        n = n/2;
        while(n%2==0)
            n = n/2;
    }
    for(ll i=3;i<=sqrt(n);i+=2)
    {
        ll flag=1;
        while(n%i==0)
        {
            if(flag)
            {
                pf.pb(i);
                flag=0;
            }
            n = n/i;
        }
    }
    if(n>2)
        pf.pb(n);

    //COUT(pf,0,pf.size());
    return pf;
}