#include<iostream>
#include<cstdio>
using namespace std;

int res,i,n,m,a[100001],l,r;
string s;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    //freopen("test.inp" , "r" , stdin);
    //freopen("test.out" , "w" , stdout);

    cin >> s;

    n = s.size();
    for (i = 1; i < n; i++)
    if (s[i - 1] == s[i])
        a[i] = a[i - 1] + 1;
    else
        a[i] = a[i - 1];
    a[n] = a[n - 1];

    cin >> m;
    for (i = 1; i <= m; i++)
    {
        cin >> l >> r;

        res = a[r - 1] - a[l - 1];

        cout << res << '\n';
    }
}
