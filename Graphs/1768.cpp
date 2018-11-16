#include <bits/stdc++.h>
using namespace std;

int dx[] = {1 , -1 , 0};
int dy[] = {1 , -1 , 0};
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
#define OOLL LLONG_MAX
#define mod 1000000007
#define SPEED_UP ios_base::sync_with_stdio(false); cin.tie(NULL);
#define sz(x) ((int)(sizeof(x)))
#define all(t) t.begin(),t.end()
#define frei freopen("out.out","r",stdin)
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

int a[MAX];
int main()
{
    int n , t ,x;
    I2(n,t);
    FOR(i,1,n)I(a[i]);
    x=1;
    while(x != n)
    {
        x+=a[x];
        if(x==t)return 0*printf("YES\n");
    }
    return 0*printf("NO\n");
}
