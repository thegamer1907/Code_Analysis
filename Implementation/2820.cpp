#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n; int t = n;
	int res = 1;
	n = (n&1)? n-3 : n-2;
	res += n/2;
	cout << res << "\n";
	if(t&1) cout << "3";
	else cout << "2";
	for(int i = 1; i < res ; i++) cout << " 2" << "\n";
	return 0;
}
