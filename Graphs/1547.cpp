//New Year Transportation
#include <bits/stdc++.h>

using namespace std;

long long n,t,i,k,now;
string ans;

int main()
{
    cin>>n>>t;
    now=1;
    ans="NO";
    for (int i=1;i<=n-1;i++)
    {
        cin>>k;
        if (i==now)
        {
            now= i+k;
            if (now==t) { ans="YES"; goto outo; }
        }
    }
    outo: cout<<ans;
    return 0;
}
