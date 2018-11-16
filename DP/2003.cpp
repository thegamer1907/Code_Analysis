#include<bits/stdc++.h>
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL);
#define rep(i,a,b) for(int i=a; i<=b; i++)
#define repp(i,a,b) for(int i=a; i>=b; i--)
#define nrep(i,a,b,c) for(int i=a; i<=b; i+=c)
#define pb push_back
#define eb emplace_back
#define ff first
#define ss second
#define watch(x) cout<<"(DEBUG) "<< (#x) <<" is "<<(x)<<'\n';
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
typedef double ld;
typedef pair<int, int> pii;
typedef pair<int, pii> piii;
typedef vector<int> vi;
const double pi=2*acos(0.0);
const char digit[]={'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
const int dy[]={0, -1, 0, 1};
const int dx[]={-1, 0, 1, 0};

int main(){ BOOST	
	int n, m, arr[100001]={};
	cin>>n>>m;
	rep (i, 1, n){
		cin>>arr[i];
	}
	map<int, bool> dp;
	int ans[100001]={};
	repp (i, n, 1){
		dp[arr[i]]=1;
		ans[i]=dp.size();
	}
	rep (i, 1, m){
		int x;
		cin>>x;
		cout<<ans[x]<<'\n';
	}
}  
