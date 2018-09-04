#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
int main()
{
    //freopen("input.txt", "r", stdin);
    int n,d;
    cin >> n >> d;
    pair <long long, long long> a[n];
    for(int i = 0; i<n; i++)
    {
        cin >> a[i].F >> a[i].S;
    }
    sort(a,a+n);
    long long c[n], s = 0;
    for(int i = 0; i<n; i++)
    {
        s += a[i].S;
        c[i] = s;
    }
    long long o = 0;
    for(int i = 0; i<n; i++)
    {
        int l = i+1, r = n-1, ans = -1;
        while (l<=r)
        {
            int x = (l+r)/2;
            if (a[i].F+d<=a[x].F) r = x-1;
            else { ans = x; l = x+1; }
        }
        //cout << i << " " << ans << endl;
        if (ans!=-1) o = max(o,c[ans]-c[i]+a[i].S);
        else o = max(o,a[i].S);
    }
    cout << o << endl;
}
