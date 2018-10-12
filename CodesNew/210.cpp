#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, t, res = 0, sum = 0, A[100010];
	cin >> n >> t;
	for(int i = 0; i < n; i++)
		cin >> A[i];
	
	int l = 0, r = 0;
	while(r < n){
		//cout << "l = " << l
		//<< ", r = " << r <<
		//", sum = " << sum << "\n";
		while(r < n && sum + A[r] <= t){
			sum += A[r++];
		}
		res = max(res, r-l);
		sum -= A[l++];
	}
	cout << res;
	return 0;
}
