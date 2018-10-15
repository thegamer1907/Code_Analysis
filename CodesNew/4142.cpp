///In the name of Allah
///BY_Mohammed_ALmasry
#include <bits/stdc++.h>
using namespace std;
typedef  long long ll;
///double rad= ( ( Angle_in_degree  *pi ) * 1.0 ) / 180;
///tan(rad):only in radians
#define Fast ios_base::sync_with_stdio(false)
#define pi 3.14159265358979323846//pi=acos(-1)
#define read freopen("input.txt","r",stdin)
#define write freopen("output.txt","w",stdout)
#define fi first
#define se second
#define pb push_back
#define f0(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define ff(i,s,e) for(int i=s;i<=e;i++)
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define sz size
#define pii pair<int,int>
#define pll pair<ll,ll>
//cout<<fixed<<setprecision(0);
int xx[9]={000,-1,1,0,0,-1,-1,1,1};
int yy[9]={000,0,0,1,-1,1,-1,1,-1};
int hx[8]={ 1, -1, 2, -2,  2, -2,  1, -1 };
int hy[8]={ 2,  2, 1,  1, -1, -1, -2, -2 };
int kx[8]={1,1,0,-1,1};
int ky[8]={1,0,1,0,0};
bool sieve[1000000];
vector< int >v[100100];
bool vi[200200];
bool adj[1100][1100];
ll a[200200];
ll pre[200200];
int main()
{
Fast;
ll sum=0,x;
memset(pre,0,sizeof pre);
int n,q,dis;
cin>>n>>q;
f1(i,n)cin>>a[i],pre[i]+=pre[i-1]+a[i];
f1(i,q)
{
cin>>x;
sum+=x;
if(sum>=pre[n])sum=0,cout<<n<<"\n";
else
dis=(pre+n)-upper_bound(pre,pre+n,sum),cout<<dis+1<<"\n";
}
}