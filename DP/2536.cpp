#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    int v[n];
    for(int i = 0; i < n; i++) cin >> v[i];
    int l = 1, c = 1;
    for(int i = 1; i < n; i++)
    {
        if(v[i] <= v[i - 1]) c = 1;
        else c++;
        l = max(l, c);
    }
    cout << l;
}