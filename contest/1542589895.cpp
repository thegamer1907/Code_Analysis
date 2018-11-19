#include <bits/stdc++.h>
using namespace std;
typedef long long               ll;
const int mod = 1e9+7;
#ifndef M_PI
const double M_PI = acos(-1.0);
#endif

int main(){
	string password;
	int n;
	cin>>password;
	cin>>n;
	vector<string> parts(n);;
	vector<string> combs;
	for(int i=0; i<n; ++i){
		cin>>parts[i];
		combs.push_back(parts[i]);
		for(int j=0; j<=i; ++j){
			combs.push_back(parts[i]+parts[j]);
			combs.push_back(parts[j]+parts[i]);
		}
	}
	bool res = false;
	for(string cur : combs){
		if(cur.find(password) != string::npos){
			res = true;
		}
	}
	if(res){
		cout<<"YES\n";
	} else{
		cout<<"NO\n";
	}
	return 0;
}
