
#include<bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define	endl		'\n'
#define pii         pair<ll int,ll int>
#define vi          vector<ll int>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define hell        1000000007
#define rep(i,a,b)	for(ll int i=a;i<b;i++)
#define lbnd        lower_bound
#define ubnd        upper_bound
#define bs          binary_search
#define mp          make_pair
using namespace std;
#define N  100005
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int TESTS=1;
//	cin>>TESTS;
	while(TESTS--)
	{
		int n,m,i,e;
		cin>>n>>m;
		int a[n],p[n];
		for(i=0;i<n;i++) cin>>a[i];
		set<int> s;
		for(i=n-1;i>=0;i--){
			s.insert(a[i]);
			p[i]=s.size();
		}
		for(i=0;i<m;i++){
			cin>>e;
			cout<<p[e-1]<<"\n";
		}
	}
	return 0;
}