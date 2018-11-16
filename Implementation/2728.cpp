#include<bits/stdc++.h>
#pragma GCC optimize("O2")
using namespace std;
int n,p[1002];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        int nr;
        cin>>nr;
        p[nr]=i;
    }
    for(int i=1;i<=n;++i)
        cout<<p[i]<<" ";
    return 0;
}
