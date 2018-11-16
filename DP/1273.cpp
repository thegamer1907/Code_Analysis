#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n];
	for (int i=0;i<n;i++){
		cin >> a[i];
	}
	int ans = 0;
	for (int i=0;i<n;i++){
		for (int j=i;j<n;j++){
			vector<int> c(a,a+n);
			for (int k=i;k<=j;k++){
				c[k] = !c[k];
			}
			int cnt = count(c.begin(),c.end(),1);
			ans = max(ans, cnt);
		}
	}
	cout << ans << endl;
}