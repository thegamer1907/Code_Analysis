#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i <= (b); i++)
#define FORD(i, a, b) for (int i = (a); i >= (b); i--)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define maxc 1000000007
#define maxn 200005
#define Task ""
using namespace std;
int h,m,s,t1,t2,dem;
int a[4];

void work()
{
 a[1] = a[1] % 12,t1 = t1 % 12,t2 = t2 % 12;
    if (t1 > t2) swap(t1,t2);
    a[1] = a[1] * 3600 + a[2] * 60 + a[3];
    a[2] = 720 * a[2] + a[3] * 12;
    a[3] = a[3] * 720;
    t1 = t1 * 3600,t2 = t2 * 3600;
     FOR(i,t1,t2)
        if (i == a[1] || i == a[2] || i == a[3])
        {
            ++dem;
            break;
        }
}

void asdsa()
{
FOR(i,t2,t1+3600*12)
    {
        int gxg = i % 43200;
        if (gxg == a[1] || gxg == a[2] || gxg == a[3])
        {
            ++dem;break;
        }
    }
    if (dem == 2) cout << "NO";
    else cout << "YES";
}

void setup()
{
    cin >> a[1] >> a[2] >> a[3] >> t1 >> t2;
    work();
    asdsa();
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie();cout.tie();
    //freopen(".inp", "r",stdin);
setup();
    return 0;
}
