#include<bits/stdc++.h>
#define BOOST ios_base::sync_with_stdio(0);
#define rep(i,a,b) for(int i=a; i<=b; i++)
#define repp(i,a,b) for(int i=a; i>=b; i--)
#define nrep(i,a,b,c) for(int i=a; i<=b; i++)
#define pb push_back
#define eb emplace_back
#define ff first
#define ss second
#define watch(x) cout<<"(DEBUG)"<< (#x) <<" is "<<(x)<<'\n';
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<int, pii> piii;
typedef vector<int> vi;
const double pi=2*acos(0.0);
const char digit[]={'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
const int dy[]={0, -1, 0, 1};
const int dx[]={-1, 0, 1, 0};
	
	ll n, k;
	map<int, ll> x;
ll slidingWindow(){
	int l=0, r=0, ans=-1e9, sum=x[0];
	while (r<n){
		if (sum<=k){
			r++;
			ans=max(ans, (r-l));
			if (r<n) sum+=x[r];
		}else{
			sum-=x[l];
			l++;
		}
	}
	return ans;
}
int main(){ BOOST
	cin>>n>>k;
	rep (i, 0, n-1){
		cin>>x[i];
	}
	cout<<slidingWindow()<<endl;
	return 0;
}

