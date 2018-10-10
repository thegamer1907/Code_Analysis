#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

unordered_map<int, LL> _1, _2;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    LL ans = 0;
    int n, k;
    cin>>n>>k;
    for(int i = 0; i < n; ++i)
    {
        int inp;
        cin>>inp;
        if(inp%k==0)
        {
            ans += _2[inp/k];
            _2[inp] += _1[inp/k];
        }
        ++_1[inp];
    }
    cout<<ans<<endl;
    return 0;
}
