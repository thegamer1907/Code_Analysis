//Main maut ko takiya, aur kafan ko chadaar banakar audhta hoon!

#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define pb push_back
#define F first
#define S second
#define mp make_pair
#define INF power<ll>(1000,4)
#define MOD 1000000007

const double PI=3.141592653589793238462643383279502884197169399375105820974944;
const double E=2.71828182845904523536028747135266249775724709369995;

ll i,j,k,l,m,n,r,p,q;
string s[55],t;
ll a[1000010]={0};

ll power(ll a, ll b)
{
    ll ans=1;
    for(i=0;i<b;i++)
        ans *= a;
    return ans;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n;

    j=1;

    ll sum=0;

    for(i=1;i<=n;i++)
    {
        cin>>k;
        sum+=k;

        for(j,l=1;l<=k;l++,j++)
        {
            a[j]=i;
        }
    }

    cin>>m;
    for(i=0;i<m;i++)
    {
        cin>>k;
        cout<<a[k]<<"\n";
    }

    return 0;

}
