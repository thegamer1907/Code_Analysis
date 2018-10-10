#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {
    ios::sync_with_stdio(false);cin.tie(0);
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int ans = 0, a = 0, b = n-1, sa = v[0], sb = v[n-1];
    while(a<b)
    {
        if(sa<sb)
        {
            sa += v[++a];
        }
        else if(sb<sa)
        {
            sb += v[--b];
        }
        else
        {
            ans = sa;
            sa += v[++a];
            sb += v[--b];
        }
    }
    cout<<ans;
    return 0;
}