/* Code by : Suraj (@suraj1611) */

#include<bits/stdc++.h>
#include <string>

using namespace std;

#define ll long long
#define rep(i,n) for(int i=0; i<n; i++)
#define rep1(j,m) for(int j=1;j<m;j++)
#define mx INT_MAX
#define mn INT_MIN
#define md 1000000007
#define pb push_back
#define mp make_pair
#define pf printf
#define sc scanf
#define maxsize 1100005
#define lb cout<<endl;
#define F first
#define S second
#define print(i) cout<<i<<endl
#define print1(i,j) cout<<i<<" "<<j<<endl
#define label cout<<"hello!"<<endl
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);



int main()
{
	IOS
	
	#ifndef ONLINE_JUDGE   
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	#endif

	ll n;
	double l,k=0;
	cin>>n>>l;
	double a[n];
	rep(i,n)
	{
		cin>>a[i];
		if(a[i]==0)
			k=1;
	}
	sort(a,a+n);
	std::vector <double> v;
	rep(i,n-1)
	v.pb(a[i+1]-a[i]);
	sort(v.begin(), v.end());
	double ans=0;
	if(n==1)
		ans=max(l-a[0],a[0]);
	else
	{
	if(k==1)
	{
		ans=(double)(max(v[v.size()-1]/2,abs(a[n-1]-l)));
	}
	else
	{
		ans=(double)max((v[v.size()-1]/2),max(abs(a[n-1]-l),a[0]));
	}
	}
	std::cout << fixed;
    std::cout << setprecision(10)<<ans<<endl;
	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

