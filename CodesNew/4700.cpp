#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FOR(I,A,B) for(long long i=I;i<A;i+=B)
#define rep(I,A,B) for(long long j=I;j<=A;j+=B)
#define repp(I,A,B) for(long long j=I;j>=A;j-=B)
#define str(I,A,B) for(long long k=0;A[k]!='\0';k++)
#define pb push_back
#define mp make_pair
#define pii pair<long long,long long>
vector <int> adj[100001];
const int mod = 1000000007;
int flag[26],carr[1000001],c2[1000001];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,i,a;
	cin>>n;
	vector<int> v,t;
	FOR(0,n,1)
	{
		cin>>a;
		t.pb(a);
		c2[a]++;
	}
	sort(t.begin(),t.end());
	//FOR(0,t.size(),1)
	//	cout<<t[i]<<" ";
	int t2=n;
	//cout<<c2[237]<<endl;
	//cout<<t[l];
	int right=n/2;
	for(int i=0;i<n/2;i++)
	{
		if(2*t[i]<=t[right]&&right<n)
			t2--,right++;
		else
		{
			while(2*t[i]>t[right]&&right<n)
				right++;
			if(right==n)
				break;
			else
				t2--,right++;
	}}
	//cout<<t1<<" "<<t2;
	cout<<t2;
	return 0;
}