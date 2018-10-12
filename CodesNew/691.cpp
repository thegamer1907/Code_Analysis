#include <bits/stdc++.h>
using namespace std;

///////////////////////////////
/*/////////////////////////////

**********Hack You*************

*//////////////////////////////
///////////////////////////////

typedef  long long ll;

ll n,m=0,k=0;

bool test=false,test1=false;

ll const N=1e5+7;

ll const oo=1000000007 ;

ll nChoosek( ll n, ll k )
{
    if (k > n) return 0;
    if (k * 2 > n) /*return*/ k = n-k;
    if (k == 0) return 1;

    ll result = n;
    for( ll i = 2; i <= k; ++i ) {
        result *= (n-i+1);
        result /= i;
    }
    return result;
}

vector<ll> v,v1;

vector<pair<ll,ll> > vv;

//ll  t[oo][oo];

map<pair<ll,ll> ,ll> my1;

map<string,ll> my;

priority_queue<ll> q;

ll t[N];

//ll t1[N][N];

ll dx[4]={0,1,0,-1};
ll dy[4]={1,0,-1,0};





vector<ll> v2[N];
ll z[N];
void dfs(ll s)
{
    if (z[s]) return;
 z[s] = 1;
 for (ll u=0;u<v2[s].size();u++)
    { dfs(v2[s][u]); }
 }

int main() {


ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

ll i=0,j=0,a=0,b=0,c=0,d=-1e18,x=0,y=0,s=0,r,l,p;
string s1,s2,s3,s4,s5;
//freopen("tabs.in","r",stdin);
cin>>n>>m;
for(i=0;i<n;i++)
{
    cin>>s1;
    my[s1]++;
    a++;
}
for(i=0;i<m;i++)
{
    cin>>s1;
    if(my.count(s1)) b++;
    else c++;;
}
a-=b;
if(b%2) k=1;
else k=0;
if(k)
{
    if(c>a) cout<<"NO";
    else cout<<"YES";
}
else
{if(a>c) cout<<"YES";
    else cout<<"NO";

}


   return 0;

}
