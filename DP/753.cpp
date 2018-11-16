#include<iostream>
#include<cstdio>
using namespace std;

int n,i,j,c,a[101],b[101],res,s;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    //freopen("test.inp" , "r" , stdin);
    //freopen("test.out" , "w" , stdout);

    cin >> n;

    a[0] = b[0] = 0;
    for (i = 1; i <= n; i++)
    {
        cin >> c;
        if (c == 1)
        {
            a[i] = a[i - 1] + 1;
            b[i] = b[i - 1];
        }
        else
        {
            a[i] = a[i - 1];
            b[i] = b[i - 1] + 1;
        }
    }

    res = 0;
    for (i = 1; i <= n; i++)
    for (j = i; j <= n; j++)
    {
        s = a[n] - (a[j] - a[i - 1]) + (b[j] - b[i - 1]);
        res = max(res,s);
    }

    cout << res;
}
