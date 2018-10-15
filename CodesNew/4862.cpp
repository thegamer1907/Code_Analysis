#include <bits/stdc++.h>
using namespace std;
string s;int n;
string t;
int arr[200002];
bool check(int idx){
	string tmp = s;
	for(int i=1;i<=idx;i++)
	tmp[arr[i]-1] = '#';
	string tmpp = "";
	for(int i=0;i<tmp.size();i++)
	if(tmp[i] !='#') tmpp+=tmp[i];
	if(tmpp.size()<t.size())
	return false;
	int sz = tmpp.size();
	int j=0;
	for(int i=0;i<sz;i++){
		if(j == t.size()) return true;
		if(tmpp[i] == t[j])
		j++;
	}
	if(j == t.size()) return true;
	return false;
}
int binary( ){
	
	int st = 1, en = n;
	int mid = (st+en)/2;
	while(st<=en){
		mid = (st+en)/2;
		if(check(mid))
			st = mid+1;
		else
			en = mid-1;
	}
	return st-1;
}
int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin>>s; cin>>t;
	n = s.size();
	for(int i=1;i<=n;i++) cin>>arr[i];
	cout<<binary();
	return 0;}