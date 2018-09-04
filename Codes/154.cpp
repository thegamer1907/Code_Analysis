#include <bits/stdc++.h>

using namespace std;

int n, m, a[100001];
set<pair<int,int> >st;

int solve(int x){
	pair<int,int> y = *st.lower_bound({x,1});
	return y.second;	
}

int main(){
	cin >> n;
	for(int x,i=1;i<=n;i++){
		cin >> x;
		a[i]+=a[i-1]+x;
		st.insert({a[i],i});
	}
	
	cin >> m;
	
	for(int x,i=1;i<=m;i++){
		cin >> x;
		cout << solve(x) << endl;
	}
	
return 0;
}