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
int gxg[4];
void nhap()
{

    cin >> gxg[1] >> gxg[2] >> gxg[3] >> t1 >> t2;
    gxg[1] = gxg[1] % 12,t1 = t1 % 12,t2 = t2 % 12;
    if (t1 > t2) swap(t1,t2);
    gxg[1] = gxg[1] * 3600 + gxg[2] * 60 + gxg[3];
    gxg[2] = 720 * gxg[2] + gxg[3] * 12;
    gxg[3] = gxg[3] * 720;
    t1 = t1 * 3600,t2 = t2 * 3600;
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie();cout.tie();
    //freopen(".inp", "r",stdin);
    nhap();

     FOR(i,t1,t2)
        if (i == gxg[1] || i == gxg[2] || i == gxg[3])
        {
            ++dem;
            break;
        }
    FOR(i,t2,t1+3600*12)
    {
        int dmm = i % 43200;
        if (dmm == gxg[1] || dmm == gxg[2] || dmm == gxg[3])
        {
            ++dem;break;
        }
    }
    if (dem == 2) cout << "NO";
    else cout << "YES";
    return 0;
}
