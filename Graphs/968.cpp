#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n, t;
	cin >> n >> t;

	vector<int> a(n);

	for(int i=1; i<=n-1; i++)
		cin >> a[i];

	int node=1;

	while(node!=n)
	{
		node = node + a[node];
		if(node == t){
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
	return 0;
}