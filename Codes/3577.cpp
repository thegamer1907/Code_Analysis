#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
int main()
{
    //freopen("input.txt", "r", stdin);
    long long n,m1,m2;
    cin >> n >> m1 >> m2;
    int time,mana;
    cin >> time >> mana;
    pair < long long, long long > a[m1],b[m2];
    long long o = n*time;
    for(int i = 0; i<m1; i++)
    {
        cin >> a[i].F;
    }
    for(int i = 0; i<m1; i++)
    {
        cin >> a[i].S;
    }
    for(int i = 0; i<m2; i++)
    {
        cin >> b[i].S;
    }
    for(int i = 0; i<m2; i++)
    {
        cin >> b[i].F;
        if (b[i].F<=mana)
        {
            long long t = (n-b[i].S)*time;
            o = min(o,t);
        }
    }
    sort(b,b+m2);
    pair <long long, long long> c[m2];
    int ma = b[0].S, nom = 0;
    c[0].F = ma; c[0].S = nom;
    for(int i = 1; i<m2; i++)
    {
        if (ma<b[i].S)
        {
            ma = b[i].S;
            nom = i;
        }
        c[i].F = ma; c[i].S = nom;
    }
    for(int i = 0; i<m1; i++)
    {
        if (a[i].S<=mana)
        {
            long long s = a[i].S;
            int l = 0, r = m2-1, ans = -1;
            while (l<=r)
            {
                int x = (l+r)/2;
                if (b[x].F+s<=mana) { ans = x; l = x+1; }
                else r = x-1;
            }
            //cout << i << " " << ans << endl;
            if (ans!=-1)
            {
                int u = c[ans].S;
                long long t = a[i].F*(n-b[u].S);
                o = min(o,t);
            }
            else { long long t = a[i].F*n; o = min(o,t); }
        }
    }
    cout << o;
}
