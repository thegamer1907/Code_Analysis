#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;

int a[N];
int b[N];

int main(){
	ios::sync_with_stdio(false);
	int n,minx;
	cin >> n;
	for (int i = 1; i <= n; i++){
		cin >> a[i];
		if (a[i] < i)
			b[i] = 0;
		else
			b[i] = (a[i] - i) / n + 1;
	}	
	minx = -1;
	for (int i = 1; i <= n; i++){
		if (minx < 0 || b[i] < b[minx])
			minx = i;
	}
	cout << minx << endl;
	return 0;
}