//http://codeforces.com/problemset/problem/348/A
#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<vi>vvi;
typedef vector<string> vs;

#define REP(i,n) for (i=0;i<n;i++)
#define FOR(i,p,k) for (i=p; i<=k;i++)

#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ss string
#define ll long long
#define pb push_back
#define p2(a,b) cout<<a<<" "<<b<<endl;
#define p3(a,b,c) cout<<a<<" "<<b<<" "<<c<<endl;	
#define all(a) a.begin(),a.end()
#define set_val(arr,n,x) fill_n(arr,n,x)
#define M 1000000007
//std::vector<int>::iterator

bool check(vi vec,int n,int days){
	int i;
	ll sum=0;
	REP(i,n){
		sum+=days-vec[i];
		if(sum>=days) return true;
	}
	return false;
}

int main(){
	fastio;
	int n,i,max_v=0;
	cin>>n;
	vi vec(n);
	REP(i,n){
		cin>>vec[i];
		max_v=max(max_v,vec[i]);
	}
	int l=max_v,r=2e9,mid;
	while(l<r){
		mid=l+(r-l)/2;
		if(check(vec,n,mid)) r=mid;
		else l=mid+1;
	}
	cout<<"\n";
	cout<<l;
	return 0;
}