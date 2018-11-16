//Chua Can Nguoi Yeu
#include <bits/stdc++.h>
#define sz(x) int(x.size())
#define reset(x) memset(x, 0,sizeof(x))
#define MIN(x,y) if (x > (y)) x = (y)
#define MAX(x,y) if (x < (y)) x = (y)
#define PB push_back
#define mp make_pair
#define F first
#define S second
#define Task "TILE"
#define maxn 10005
#define MOD 1000000007
#define remain(x) if (x > MOD) x -= MOD
#define pii pair<int, int>
#define ll long long

using namespace std;
int n;
int x[maxn],y[maxn],z[maxn];
int res1=0,res2=0,res3=0;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //freopen("69A.inp","r",stdin);
    //freopen("69A.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>x[i]>>y[i]>>z[i];
        res1+=x[i];
        res2+=y[i];
        res3+=z[i];
    }
    if(res1==0 && res2==0 && res3==0)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
