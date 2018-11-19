#include <bits/stdc++.h>
#define pb push_back
#define sc1(n) scanf("%lld",&n)
#define sc2(a,b) scanf("%lld%lld",&a,&b)
#define sc3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define MX 100000
using namespace std;

typedef long long int ll;
typedef unsigned long long ul;
//ios_base::sync_with_stdio(false);
//cin.tie(NULL);
int main()
{
    string str;
    cin>>str;
    ll n;
    cin>>n;
    bool ok=false;
    bool fr=false;
    bool se=false;
    while(n--)
    {
        string now;
        cin>>now;
        if(now==str)ok=true;
        if(str[1]==now[0])fr=true;
        if(str[0]==now[1])se=true;
    }
    if(ok||(fr&&se))
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
