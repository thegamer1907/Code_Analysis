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
string s;
int dem=1,a=0;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //freopen("96A.inp","r",stdin);
    //freopen("96A.out","w",stdout);
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(dem>=7)
        {
            a=1;
            cout<<"YES";
            break;
        }
        if(s[i]==s[i+1])
            dem++;
        else
        {
            dem=1;
            continue;
        }
    }
    if(a==0) cout<<"NO";
    return 0;
}
