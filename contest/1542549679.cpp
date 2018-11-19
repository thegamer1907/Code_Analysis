// Nice dp problem

#include <bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;
typedef long double ld;

#define mp make_pair
#define pb push_back
#define bp __builtin_popcount
#define FI first
#define SE second

#define mt(a,b,c) mp(a,mp(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))
#define pii pair<int,int>

const ll mo=1e9+7;
const ll INF=1e9+1;
const ld pi=acos(-1);
const int mxn=1e2+5;
const int cons=1;

using namespace std;

string s,temp;
string str[mxn];

int main()
{
    //freopen("input.txt","r",stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i,j,n;
    bool f=0;
    cin>>s;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>str[i];
        if(str[i]==s)
        {
            f=1;
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            temp=str[i]+str[j];
            if(temp[1]==s[0]&&temp[2]==s[1])
            {
                f=1;
            }
        }
    }
    if(f)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
    return 0;
}
