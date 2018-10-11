#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


void find_max_books(ll n, ll t){
	ll books_len[100001];

	bool has_smaller = false;
	for(int i=0; i<n; i++){
		cin >> books_len[i];
		has_smaller = has_smaller || (books_len[i]<=t);
	}
	if(!has_smaller){
		cout << 0 << endl;
		return;
	}

	ll l=0, r=0;
	ll max_len = 0;
	ll total_time = books_len[0];
	while(r<n){
		// cout << l << " ==> " << r  << endl;
		if(total_time <= t){
			max_len = max(max_len, (r-l)+1);
			r++;
			total_time += books_len[r];
		}else{
			total_time -= books_len[l];
			l++;
		}
	}
	cout << max_len << endl;
	return;
}

int main(){
	ll n, t;
	cin >> n >> t;
	find_max_books(n, t);
	return(0);
}
