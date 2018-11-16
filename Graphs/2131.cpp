#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define IF(x, y, a, b) (x % y == 0 ? a : b)
int main(){
	int n, m,k;	cin>>n>>m;
	int ans=100000,arr[10001];
	fill(arr,arr+10001,0);
	vector<pair<int, int>> v;
	v.push_back(make_pair(n, 0));
	for(k=0;k<v.size();k++){
		pair<int, int> i=v[k];
		if(i.f == m)
			ans=min(ans,i.s);
		else if(i.f>m){
			ans=min(ans,i.s+(i.f-m));
		}
		else if(i.f>0 && !arr[i.f]){
			arr[i.f]=1;
			v.pb(mp(i.f-1, i.s+1));
			v.pb(mp(i.f*2, i.s+1));
		}
	}
	cout<<ans;
	return 0;
}