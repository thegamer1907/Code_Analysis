#include<bits/stdc++.h>
using namespace std;

const int PRECISION = 10;

int res[280];

int main() {
	#define endl '\n'
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0), cout.setf(ios::fixed), cout.setf(ios::showpoint), cout.precision(PRECISION);
	int n;
	cin>>n;
	for(int i = 1;i <= n;i++) {
		int x;
		cin>>x;
		res[x] = i;
	}
	for(int i = 1;i <= n;i++) cout<<res[i]<<" ";
}
