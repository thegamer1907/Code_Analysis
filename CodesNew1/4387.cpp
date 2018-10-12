#include <bits/stdc++.h>
using namespace std;
#define mk make_pair
#define pi pair < int , int >
#define PI 2*acos(0.0)
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
#define ff first
#define ss second
#define ll long long int
#define mod 1000000007
vector < string   > v;
int main()
{
    ios_base::sync_with_stdio(0);
    ll i,j,m,n,p,p2;
    string s,ss;
    cin>>n;
    for(j=0;j<n;j++)
        {
            cin>>s;
            v.push_back(s);
            }
            for(j=n-2;j>=0;j--)
            {
                ss=v[j+1];
                s=v[j];
                if(ss>=s)
                    continue;
                p2=ss.length();
                p=s.length();

                for(i=0;i<min(p,p2);i++)
                {
                    if(ss[i]<s[i])
                        break;

                }
                s=s.substr(0,i);
                if(s>ss)
                    s=s.substr(0,p2);
                v[j]=s;
            }

            for(i=0;i<n;i++)
                cout<<v[i]<<"\n";

    return 0;
}
/*
for(j=0;j<n;j++)
{
}
for(t=0;t<tt;t++)
{}
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
    }
}

*/
