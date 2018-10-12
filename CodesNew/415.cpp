#include <bits/stdc++.h>
#define lld long long int
#define vi vector<int>
#define vlld vector<lld>
#define pb push_back
#define ff first
#define ss second
#define pii pair<int,int>
#define mii map<int, int>
#define vii vector<pii>
 
using namespace std;
 
 
 
int main(){
   	std::ios::sync_with_stdio(false);
   	#ifndef ONLINE_JUDGE
   	freopen("input.txt", "r", stdin);
   	freopen("output.txt", "w",stdout);
   	#endif
	
	int n,m;
	cin>>n>>m;
	vi v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	int l = 0,sum=0,ans=0,i=0;
	vi sol;
	while(l<n){
		sum+=v[i];
		if(sum<=m){
			ans = max(ans,(i-l+1));
		}
		while(sum>m){
			sum-=v[l];
			l++;
		}
		if(i<n-1){
			i++;
		}

	}
	cout<<ans;
   	return 0;
}