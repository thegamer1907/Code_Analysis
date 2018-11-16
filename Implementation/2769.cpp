/*   You have lost, my dear   */

#include<bits/stdc++.h>
#pragma GCC optimize("O2")
using namespace std;
int n,v[1002];
int sol;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n;
    for(int i=1;i<=n;++i)
        cin>>v[i];
    sort(v+1,v+n+1);
    for(int i=1;i<=n;++i)
        sol+=v[n]-v[i];
    cout<<sol;
    return 0;
}
