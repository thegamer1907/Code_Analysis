#include <bits/stdc++.h>

using namespace std;

int n, ans = 2e9, a[100010], rs;

int dist(int j, int i){
	return ((i-j)%n+n)%n;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		int tmp = a[i]+dist(a[i],i);
		//cout <<tmp << " ";
		if(ans > tmp){
			rs = i;
			ans = tmp;
		}

	}
	cout << rs+1;
}