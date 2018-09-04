#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define ft first
#define sd second
#define snd sd.ft
#define td sd.sd

#define all(a) a.begin(),a.end()
#define tc int t;scanf("%d",&t);while (t-->0)
#define debug(x) cout<<"### x is: "<<x<<"###"<<endl
#define MAXN 100010
#define ninf -1000000000
#define pinf 1000000000

//typedef unsigned long long int uint64;
static const double PI = acos(-1.0);
typedef long long ll;
const int LIM = 1e7+5;
typedef vector<pair<ll,ll> > vecpair;
typedef vector<pair<ll, pair<ll,ll> > > vecpair3;
ll j;
const ll maxn = 1e7+5;
bool vis[maxn];
long long prime[maxn+4];
long long bit[maxn+4];
long long sp[maxn+4];
int val[maxn+4];
#define pp pair<ll,ll>
void update(long long int idx,long long int val)
{
    while(idx<=maxn)
    {
        bit[idx]+=val;
        idx+=idx&(-idx);
    }
}
long long query(long long idx)
{
    long long sum=0;
    while(idx>0)
    {
        sum+=bit[idx];
        idx-=idx&(-idx);
    }
    return sum;
}
vector<ll> v;
void sieve() {
	//v.push_back(2);
	for(int i=0;i<LIM;i++) prime[i]=2;
	v.push_back(2);
	for(long long i=3;i<LIM;i+=2) {
		if(!vis[i]) {
			v.push_back(i);
			prime[i]=i;
			for(long long j=i*i;j<LIM;j+=2LL*i) {
				vis[j]=true;
				prime[j]=i;
			}
		}
	}
}
int main()
{
    sieve();
    int n,i;
    scanf("%d",&n);
    int a[n];
    //cout<<prime[10]<<endl;
    //cout<<prime[2]<<" "<<prime[3]<<" "<<prime[4]<<" "<<prime[5]<<endl;
    //v[0].pb(1);
    //cout<<v[0][0]<<endl;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        long long X=a[i];
        //cout<<X<<endl;
        while(X != 1)
        {
			int div = prime[X];
			while(X%div == 0)
            {
				X/=div;
      //          cout<<v[i][0]<<endl;
			}
			val[div]++;
		//	update(div,1);
		}
    }
    //cout<<val[2]<<" "<<val[3]<<" "<<val[5]<<" "<<val[7]<<endl;
    //cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<" "<<v[3]<<endl;
    for(int i=0;i<(int)v.size();i++)
        update(v[i],val[v[i]]);
    int q;
    cin>>q;
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        if(l>=10000001)
            l=10000000;
        if(r>=10000000)
            r=10000000;
        int g=query(r)-query(l-1);
        printf("%d\n",g);
    }
}
