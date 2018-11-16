#include <bits/stdc++.h>
using namespace std;
const int N = 100 + 5;

int arr[N];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int n, k; cin >> n >> k;
	if(k >= 2) cout << "Yes" << '\n';
	else{
		int p = -1;
		for(int i=0;i<n;i++){
			cin >> arr[i];
			if(arr[i]==0) p = i;
		}
		int a; cin >> a;
		arr[p] = a;
		bool flag = true;
		for(int i=1;i<n;i++) flag &= arr[i]>arr[i-1];
		cout << (flag?"No":"Yes") << '\n';
	}
	return 0;
}