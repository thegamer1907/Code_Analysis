#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
int pr(string x, string y)
{
    int i = 0, n = x.size(), m = y.size();
    if (x==y) return -1;
    while (i<n && i<m && x[i]==y[i])
    {
        i++;
    }
    if (i==n && i==m) return -1;
    else if (i<n && i==m) return -1;
    else if (i==n && i<m) return i;
    else if (x[i]>y[i]) return -1;
    else return i;
}
int main()
{
    //freopen("input.txt", "r", stdin);
    int n;
    cin >> n;
    string a[n];
    for(int i = 0; i<n; i++)
    {
        cin >> a[i];
    }
    for(int i = n-1; i>0; i--)
    {
        int ch = pr(a[i],a[i-1]);
        //cout << a[i] << " " << a[i-1] << " " << ch << endl;
        while (ch!=-1)
        {
            a[i-1] = a[i-1].substr(0,ch);
            ch = pr(a[i],a[i-1]);
        }
    }
    for(int i = 0; i<n; i++)
    {
        cout << a[i] << endl;
    }
}

