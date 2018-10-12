#include<bits/stdc++.h>
#define ll long long int
#define pii pair < int , pair < int , int > >
#define pll pair < ll , pair < ll , ll > >
#define pi pair < int , int >
#define pp pair < ll , ll >
#define inf 1e18
#define mod 1000000007
#define pb push_back
#define si1(a) scanf("%d",&a)
#define si2(a,b) scanf("%d%d",&a,&b)
#define si3(a,b,c) scanf("%d%d%d",&a,&b,&c)
#define sl1(a) scanf("%lld",&a)
#define sl2(a,b) scanf("%lld%lld",&a,&b)
#define sl3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define popcount(a) __builtin_popcount(a)
#define PI 3.14159265
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,i,j,k;
    cin>>n;
    vector < string > v;
    vector < string > ans;
    for(i=0;i<n;i++)
    {
        string s;
        cin>>s;
        v.push_back(s);
    }
    ans.push_back(v[n-1]);
    for(i=n-2;i>=0;i--)
    {
        string s=v[i];
        string s1=ans[ans.size()-1];
        if(s<=s1)
        {
            ans.push_back(s);
            continue;
        }
        string s2="#";
        for(j=1;j<s1.length();j++)
        {
            if(s[j]==s1[j])
                s2.push_back(s[j]);
            else
                break;
        }
        ans.push_back(s2);
    }
    for(i=ans.size()-1;i>=0;i--)
        cout<<ans[i]<<"\n";
    return 0;
}
