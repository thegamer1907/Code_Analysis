#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f0(n) for(size_t i=0;i<n;i++)
#define f1(n) for(size_t i=1;i<=n;i++)
#define mem(a) memset(a,0,sizeof(a))
#define memn(a) memset(a,-1,sizeof(a))
#define pb push_back
#define nl '\n'
const double pi= acos(-1);
#define NFS ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
int main()
{

	NFS

    ll b;
    cin>>b;
    ll boy[b];
        for(int i = 0; i<b;i++)
        {
            cin>>boy[i];
        }
        ll g;
        cin>>g;
         ll girl[g];
        for(int i = 0; i<g;i++)
        {
            cin>>girl[i];
        }
        ll ans = 0;
        ll m = 0;
        sort(boy,boy+b);
        sort(girl,girl+g);
        for(int i  = 0; i<b;i++)
        {
            for(int j = m; j<g;j++)
            {
                if(abs(boy[i] - girl[j]) <= 1)
                {
                    ans++;
                    //girl[j]  = 1;
                    m = j+1;
                    break;
                }
            }
        }
        cout<<ans<<nl;


    return 0;
}
