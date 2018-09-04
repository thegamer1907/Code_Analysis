#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
int main()
{
    //freopen("input.txt", "r", stdin);
    int n,m;
    cin >> n >> m;
    int a[n][m], b[n][m], c[n];
    for(int i = 0; i<n; i++)
    {
        c[i] = 0;
        for(int j = 0; j<m; j++)
        {
            cin >> a[i][j];
            if (i==0) b[i][j] = 1;
            else { if (a[i][j]>=a[i-1][j]) b[i][j] = b[i-1][j]+1; else b[i][j] = 1; }
            c[i] = max(c[i],b[i][j]);
        }
    }
    int q;
    cin >> q;
    for(int i = 0; i<q; i++)
    {
        int x,y;
        cin >> x >> y;
        x--; y--;
        if (c[y]>=y-x+1) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}

