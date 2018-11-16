#include<bits/stdc++.h>
#define F first
#define S second
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int n, m;
    cin >> n >> m;
    set < int > s;
    vector < int > a(n), b(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = n - 1; i >= 0; --i)
    {
        s.insert(a[i]);
        b[i] = s.size();
    }
    while (m--)
    {
        int x;
        cin >> x;
        --x;
        cout << b[x] << endl;
    }
}
