#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define pb push_back
#define f first
#define s second
#define mod 1000000007
#define inf 1000000000
#define linf 100000000000000000LL
typedef pair< ll , ll > ii;
typedef pair< ll ,pair< ll , ll > > iii;

string str;
string s;
vector< string > v;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,i,j;

    cin>>s;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>str;
        v.pb(str);
    }
    for(i=0;i<n;i++)
    {
        if( v[i]==s )
        {
            cout<<"YES\n";
            return 0;
        }
    }
    for(i=0;i<n;i++)
    {
        if( v[i][1]==s[0] )
        {
            for(j=0;j<n;j++)
            {
                if( v[j][0]==s[1] )
                {
                    cout<<"YES\n";
                    return 0;
                }
            }
        }
    }
    cout<<"NO\n";

    return 0;
}
