#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i ++)
		cin >> a[i];
	int m;
	cin >> m;
	int b[m];
	for(int j = 0; j < m; j ++)
		cin >> b[j];
	sort(b,b+m);
	sort(a,a+n);
	int ans = 0;
	for(int i = 0, j = 0; i < n && j < m;){
		if(abs(a[i] - b[j]) < 2)
			i ++, j ++, ans ++;
		else
			if(a[i] < b[j])
				i ++;
			else
				j ++;
	}
	cout << ans;
}