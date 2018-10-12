#include <bits/stdc++.h>
#define lli long long int
#define ld long double
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define F first
#define S second
using namespace std;

int main()
{
    int k; cin>>k; string s; cin>>s;
    std::vector<int> lulzsec; int lulz=0, n = s.length();
    for(int i=0;i<n;++i)
    {
        if(s[i]=='0') lulz++;
        else{
            lulzsec.pb(lulz);
            lulz = 0;
        }
    }
    lulzsec.pb(lulz); lli ans = 0;
    if(k==0)
    {
        for(int i=0;i<lulzsec.size();++i)
        {
            ans += ((lulzsec[i]+1)*1LL*(lulzsec[i]))/2LL;
        }
        cout<<ans;
        return 0;
    }
    if(lulz == n)
    {
        cout<<"0";
        return 0;
    }
    for(int i=0;i+k<lulzsec.size();++i)
    {
        ans += (lulzsec[i]+1)*1LL*(lulzsec[i+k]+1);
    }
    cout<<ans;
    return 0;
}
