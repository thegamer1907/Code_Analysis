#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, t;
	cin>>n>>t;
	vector<int> vec(n);
	for(int i = 0; i < n; ++i){
		cin>>vec[i];
	}
	vector<long long> s(n, 0);
	s[0] = vec[0];
	for(int i = 1; i < n; ++i){
		s[i] = s[i - 1] + vec[i];
	}
	int res = 0;
	for(int i = 0; i < n; ++i){
		int l = i;
		int r = n;
		while(l <= r){
			int m = l + (r - l) / 2;
			if(s[m] - s[i] + vec[i] == t){
				r = m;
				res = max(res, m - i + 1);
				break;
			}
			else if(s[m] - s[i] + vec[i] > t){
				r = m - 1;
			}
			else{
				l = m + 1;
			}
		}
		if(s[r] - s[i] + vec[i] < t){
			res = max(res, r - i + 1);
		}
	}
	if(res > n)res = n;
	cout<<res<<endl;
	return 0;
}
