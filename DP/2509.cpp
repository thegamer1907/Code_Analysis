#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	int x; int res = 1; int cnt = 0; int pre = 0;
	for(int i = 1; i <= n; ++i){
		cin>>x;
		//cout<<pre<<" "<<x<<endl;
		cnt = (pre<x) ? cnt + 1 : 1;
		res = max(res, cnt);
		pre = x;
	}
	cout<<res;
}