#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);
	int n, q;
	cin >> n >> q;
	int arr[n];
	set<int> st;
	for(int i=0; i<n; ++i){
		int t;
		cin >> arr[i];
	}
	int pre[n];
	for(int i=n-1; i>=0; --i){
		st.insert(arr[i]);
		pre[i]=(int)st.size();
	}
	while(q--){
		int l;
		cin >> l;
		cout << pre[l-1] << endl;
	}
}