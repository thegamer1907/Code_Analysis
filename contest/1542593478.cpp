/* code by AbhiTaker  */
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define M 1000000007
#define N 1000016
#define ff first.first
#define fs first.second
#define sf second.first
#define ss second.second
#define f first
#define s second
#define inf 9000000000000000000

int main()
{
    //ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string s;
    cin>>s;
    ll n ,i,j;
    cin>>n;
     string s2[n+1];
    for(i=0;i<n;i++)
        cin>>s2[i];

    ll f=0;
    for(i=0;i<n;i++)
    {
        if(s2[i]==s)
        {
            f=1;
            break;
        }
        for(j=0;j<n;j++)
        {
            if(s2[i][1]==s[0] && s2[j][0]==s[1])
            {
                f = 1;
                break;
            }
        }
    }

    if(f==1)
        cout<<"YES\n";
    else
        cout<<"NO\n";

    return 0;
}
