#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define start ll t; cin>>t; while(t--)
# define lp(i,a,b) for(i=(a);i<(b);++i)
#define fush cin.ignore(1000, '\n');
void kandy(int f)
{
    cout<<f<<endl;
}
int main() 
{
    fast;
    ll n;
    cin>>n;
    ll a[101],b[101],c[101];
    ll s1=0,s2=0,s3=0;
    ll i;
    lp(i,0,n)
    {
        cin>>a[i]>>b[i]>>c[i];
        s1=s1+a[i];
        s2=s2+b[i];
        s3=s3+c[i];
    }
    if(s1==0&&s2==0&&s3==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
	return 0;
}