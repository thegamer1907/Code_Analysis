#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<string> vs;
typedef map<int,int> mpii;
typedef map<string,int> mpsi;
#define pb push_back
#define INF 1000000000
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int n;cin>>n;
	vi a(n);for(int i=0;i<n;i++) cin>>a[i];
	int cur=1,mx=1;
	for(int i=1;i<n;i++)
	{
		if(a[i]>a[i-1]) cur++;
		else {
			mx=max(cur,mx);
			cur=1;
		}

	}
	mx=max(cur,mx);
	cout<<mx<<endl;
	return 0;
}