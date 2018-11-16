// In the name of god
// A.H.Ghaznavi
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef const int ci;
ci maxn=1e4+10;
int n,p[maxn],c[maxn],ans=1;
int main()
{
    cin>>n;
    for (int i=2;i<=n;i++)
        cin>>p[i];
    for (int i=1;i<=n;i++)
        cin>>c[i];
    for (int i=2;i<=n;i++)
    {
        if (c[i]!=c[p[i]])
            ans++;
    }
    cout<<ans;
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
}
