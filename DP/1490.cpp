#include <bits/stdc++.h>
#include<fstream>
using namespace std;
#define fastread ios_base::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
#define vi vector<ll>
#define For(i,a,b) for(ll (i)=(a);(i)<(b);++(i))
#define Fore(i,a,b) for(ll (i)=(a);(i)<=(b);++(i))
#define rof(i,a,b) for(ll (i)=(a);(i)>=(b);--(i))
#define max_el(x) max_element(x.begin(),x.end())
#define min_el(x) min_element(x.begin(),x.end())
#define pll pair<ll,ll>
#define ull unsigned long long 
#define ld long double
#define inf 1e18
#define xx first
#define yy second
#define pb push_back
#define pi 3.14157
#define all(a)   (a).begin(),(a).end()
#define show(a) cout<<endl<<#a<<" = "<<(a)<<endl;
#define showarr(ar,size) cout<<endl<<#ar<<" array follows ";for(ll i=0;i<size;i++) cout<<ar[i]<<" "; cout<<endl;
#define mod 1000000007
//---------------------------------------------------------------------------------------------------------------------//

ll i,j,n,t;

int main()
{
	//ifstream cin("mytemp.txt");
	fastread;
	cin>>n;
	vi a(n);
	For(i,0,n)
	cin>>a[i];
	ll ma=-inf;
	For(i,0,n)
	{
		For(j,i,n)
		{
			ll ans=accumulate(a.begin()+i,a.begin()+j+1,0);
			ll k=accumulate(a.begin(),a.begin()+i,0);
			ll l=accumulate(a.begin()+j+1,a.end(),0);
			ll m=(j-i+1)-ans;
			m+=(k+l);
			ma=max(m,ma);
		}
	}
	cout<<ma;
	return 0;
	
}
