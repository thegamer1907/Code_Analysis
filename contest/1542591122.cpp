#include <bits/stdc++.h>
#define ill int long long
#define pb push_back
#define fi first
#define se second
using namespace std;
ill n,i,j,ans,d[1005],h[1005];
string s1,s[105];
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    cin>>s1;
    cin>>n;
    for (i=1;i<=n;i++)
    {
        cin>>s[i];
    }
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=n;j++)
        {
            //cout<<s[i]<<" "<<s[j]<<endl;
            if (s[i]==s1 || ((s[i][1]==s1[0] && s1[1]==s[j][0]))){cout<<"YES";return 0;}
        }
    }
    cout<<"NO";

}
