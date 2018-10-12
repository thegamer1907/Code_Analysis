#include <bits/stdc++.h>
using  namespace  std;
// File.
#define READ(f)         freopen(f, "r", stdin)
#define WRITE(f)        freopen(f, "w", stdout)
typedef unsigned int            U;
typedef long int                L;
typedef unsigned long int       LU;
typedef long long int           LL;
typedef unsigned long long int  LLU;
typedef float                   F;
typedef double                  LF;
typedef char                    C;
//STL
typedef vector<LL>vl;
typedef pair<int,int>pii;
typedef pair<string,int>psi;
typedef pair<LL,LL>pll;
typedef pair<LF,LF>pdd;
typedef vector<pii> vpii;
void fr()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
vl v1,v2;
vector<LL> ::iterator it1,it2;
int main()
{
    fr();
    LL n, val,ans = 0;;
    cin>>n;
    int v [n ];
    for(int i = 0 ; i < n ; i ++ )
        cin>>v[i];

    sort( v, v+n );
    int h=n-1;
    for(int l=n-1; l>=0; l--)
    {
        if(v[l]*2<=v[h])h--,ans++;
    }
    ans=min(ans,n/2);
    cout<<n-ans;

    /*
    LL n, m, k, l,val;
    cin>>n>>m;
    cin>>k;
    while(k--)
    {
        cin>>val;
        v1.push_back(val);
    }
    cin>>l;
    while(l--)
    {
        cin>>val;
        v2.push_back(val);
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    for(int i=n; i>0; i--)
        for(int j=1; j<=m; ++j)
        {
            it1 = lower_bound(v1.begin(),v1.end(),i+j);
            it2 = lower_bound(v2.begin(),v2.end(),i+m+1-j);
            if(it1!=v1.end())
                v1.erase(it1);
            else if(it2!=v2.end())
                v2.erase(it2);
            else
            {
                cout<<"NO";
                return 0;
            }
        }
    cout<<"YES";*/
}
/*                  ________________.  ___     .______
                   /                | /   \    |   _  \
                  |   (-----|  |----`/  ^  \   |  |_)  |
                   \   \    |  |    /  /_\  \  |      /
              .-----)   |   |  |   /  _____  \ |  |\  \-------.
              |________/    |__|  /__/     \__\| _| `.________|
               ____    __    ____  ___     .______    ________.
               \   \  /  \  /   / /   \    |   _  \  /        |
                \   \/    \/   / /  ^  \   |  |_)  ||   (-----`
                 \            / /  /_\  \  |      /  \   \
                  \    /\    / /  _____  \ |  |\  \---)   |
                   \__/  \__/ /__/     \__\|__| `._______/
*/