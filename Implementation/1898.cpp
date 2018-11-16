#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define pb push_back
#define inf INT_MAX
#define mk make_pair
#define MOD 1000000007
#define in insert
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll t;	cin>>t;
    ll x,y,z;
    ll cx=0,cy=0,cz=0;
    while(t--)
    {
    	cin>>x>>y>>z;
    	cx+=x;
    	cy+=y;
    	cz+=z;
	}
	if(cx==0 and cy==0 and cz==0)
		cout<<"YES\n";
	else
		cout<<"NO\n";
    return 0;
}

