#include 		<bits/stdc++.h>
#define ll      long long int
#define pb 		push_back
#define mp 		make_pair
#define F 		first
#define S 		second
#define MOD 	1000000007
#define pii 	pair<int,int>
#define vi 		vector<int>
#define fio		ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define N 		200010
using namespace std;

int main()
{
	ll n,m,k,l,r,mid,t,i;
	cin>>n>>m>>k;
	l=1;
	r=n*m+1;
	while(l<r)
	{
		mid=(l+r)/2;
		t=0;
		for(i=1;i<=n;i++)
			t+=min(m,(mid-1)/i);
		if(t<k)
			l=mid+1;
		else
			r=mid;
	}
	cout<<l-1<<endl;
	return 0;
}












