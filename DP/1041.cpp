#include <bits/stdc++.h>
typedef unsigned long long ull;
using namespace std;
ull max(ull a, ull b)
{
	if(a > b) return a;
	return b;
}
int main()
{
	ull n,i,j,k,m;
	cin >> n;
	vector<ull> a(n,1);
	ull sum = n;
	for(i = 0;i < n; i++)
	{
		cin >> k;
		if(k == 0) {
			a[i] = k;
			sum--;
		}
	}
	if(sum == n){
		cout << sum - 1;
		return 0;
	}
	if(sum == n - 1){
		cout << sum + 1;
		return 0;
	}
	m = 0;
	for(i = 0; i < n; i++)
	{
		if(a[i] == 0){
			k = sum;
			for(j = i;j < n; j++)
			{
				if(a[j] == 0) k++;
				else k--;
				m = max(m,k);
			}
		}
	}
	cout << m;
}
