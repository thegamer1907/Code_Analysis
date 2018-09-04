#include <bits/stdc++.h>
using namespace std;
#define int long long
int ceili(int a, int b)
{
    return (a+b-1)/b;
}
int32_t main() {
    ios::sync_with_stdio(false);cin.tie(0);
    int n;
    cin>>n;
    vector<int> v(n);
    for(auto &i:v) cin>>i;
    int turn = 1e10, idx = -1;
    for(int i=0;i<n;i++)
    {
        v[i] -= i;
        if(v[i]<=0) return cout<<(i+1),0;
        if(ceili(v[i],n)<turn)
        {
            turn = ceili(v[i],n);
            idx = i+1;
        }
    }
    cout<<idx;
    return 0;
}