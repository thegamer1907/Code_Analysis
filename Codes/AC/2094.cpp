#include<bits/stdc++.h>
#include <ext/numeric>
using namespace std;
#define sc(a) scanf("%d",&a)
#define sc2(a,b) scanf("%d%d",&a,&b)
#define sc3(a,b,c) scanf("%d%d%d",&a,&b,&c)
#define sc4(a,b,c,d) scanf("%d%d%d%d",&a,&b,&c,&d)
#define scd(a) scanf("%lf",&a)
#define scd2(a,b) scanf("%lf%lf",&a,&b)
#define scd3(a,b,c) scanf("%lf%lf%lf",&a,&b,&c)
#define scd4(a,b,c,d) scanf("%lf%lf%lf%lf",&a,&b,&c,&d)
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define ALL(x) x.begin(), x.end()
#define BUFF ios::sync_with_stdio(false)
#define endl "\n"
#define power(a,x) __gnu_cxx::power(a, x)
#define forN(i,n) for(int i=0;i<n;i++)
#define eps 1e-5
#define INF INT_MAX
#define INFLL LLONG_MAX
#define gcd(a,b) __gcd(a,b)
typedef unsigned long long int ull;
typedef long long int ll;
typedef long double ld;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vector<int> >vvi;
const int inf = 0x3f3f3f3f;
#define MAXN 18
string s;
map<int,ll> dp1,dp2,dp3;
int v[200010];
int main()
{
    BUFF;
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++)cin>>v[i];
    ll ret=0;
    for(int i=n-1;i>=0;i--)
    {
        if(abs((v[i]*k))<inf && v[i]==v[i]*k/k)
        {
             ret+=dp2[v[i]*k];
            dp2[v[i]]+=dp1[v[i]*k];
        }
        dp1[v[i]]++;
    }
    cout<<ret<<endl;
}
