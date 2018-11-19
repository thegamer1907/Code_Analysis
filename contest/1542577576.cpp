#include<bits/stdc++.h>
#define ll long long
#define st string
#define fr first
#define se second
using namespace std;

st s[111];

int main()
{
    //freopen("equation.in", "r", stdin);
    //freopen("equation.out", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    st x;
    cin>>x;
    ll n;
    cin>>n;
    for(ll i=1; i<=n; i++)
    {
        cin>>s[i];
        if(x==s[i]) { cout<<"YES"; return 0; }
    }

    for(ll i=1; i<=n; i++)
    {
        for(ll j=1; j<=n; j++)
        {
            st y=s[i], z=s[j];
            st lol=""; lol=lol+y[y.size()-1]+z[0];
            if(lol==x) { cout<<"YES"; return 0; }

            lol="";
            lol=lol+z[z.size()-1]+y[0];
            if(lol==x) { cout<<"YES"; return 0; }
        }
    }

    cout<<"NO";
    return 0;

}
/**

*/
