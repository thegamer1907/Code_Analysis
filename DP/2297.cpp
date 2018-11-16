#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<pair<int,int> > vp;
#define pb push_back
#define mp make_pair
#define ll long long
#define rep(i,n) for(int i=0;i<n;i++)
#define MOD 1000000007
#define N 100010
int A[N],ans[N];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n,m;
	cin>>n>>m;
	set<int> df;
	for(int i=0;i<n;i++)cin>>A[i];
	for(int i=n-1;i>=0;i--){
		df.insert(A[i]);
		ans[i]  = df.size();
	}	
	for(int i=0;i<m;i++){
		int a;
		cin>>a;
		cout<<ans[a-1]<<'\n';
	}

	
}