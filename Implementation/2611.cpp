#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<pair<int,int> > vp;
#define pb push_back
#define mp make_pair
#define ll long long
#define rep(i,n) for(int i=0;i<n;i++)
#define MOD 1000000007
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n,ans = 0;
	cin>>n;
	for(int i=0;i<n;i++){
		int x,y;
		cin>>x>>y;
		if(y - x >= 2)ans++;
	}
	cout<<ans<<'\n';

	
}