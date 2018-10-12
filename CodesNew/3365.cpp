#include <bits/stdc++.h>
#include <string>
using namespace std;

int dx[] = {1 , -1 , 0 ,  0};
int dy[] = {0 ,  0 , 1 , -1};
#define ll long long
#define vi vector <int>
#define pi pair< int , int >
#define pii pair< pi , int >
#define fr first
#define sc second
#define pb push_back
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define PI acos(-1)
#define eps 1e-6
#define OO   INT_MAX
#define infin LLONG_MAX
#define mod 1000000007
#define SPEED_UP ios_base::sync_with_stdio(false); cin.tie(NULL);
#define SZ(x) ((int)(sizeof(x)))
#define sz(v) (int)v.size()
#define all(t) t.begin(),t.end()
#define frei freopen("in.in","r",stdin)
#define freo freopen("out.out","w",stdout)
#define SET(x,y)    x|=(1<<y)
#define CLEAR(x,y)  x&= ~(1<<y)
#define TOGGLE(x,y) x^=(1<<y)
#define READ(x,y)   ((bool)((ll)(x&(1<<y)) != 0))
#define I(x) scanf("%d",&x)
#define I2(x,y) scanf("%d%d",&x,&y)
#define I3(x,y,z) scanf("%d%d%d",&x,&y,&z)
#define I4(x,y,z,r) scanf("%d%d%d%d",&x,&y,&z,&r)
#define L(x) scanf("%I64d",&x)
#define L2(x,y) scanf("%I64d%I64d",&x,&y)
#define L3(x,y,z) scanf("%I64d%I64d%I64d",&x,&y,&z)
#define L4(x,y,z,r) scanf("%I64d%I64d%I64d%I64d",&x,&y,&z,&r);
#define D4(x,y,z,r) scanf("%lf%lf%lf%lf",&x,&y,&z,&r);
#define MAX (int)1e5+100
int a[200];
int main()
{
    int n , m;
    int mx = -1 , sum = 0;
    I2(n,m);
    FOR(i,0,n)I(a[i]) ,mx = max(mx , a[i]) , sum += a[i];
    if((mx*n) - sum >= m)printf("%d %d\n",mx , mx + m);
    else
    {
        int exm = m;
        m -= ((mx*n) - sum);
        m = (int)ceil(1.0*m/n);
        printf("%d %d\n",mx + m , mx + exm);
    }
    return 0;
}
