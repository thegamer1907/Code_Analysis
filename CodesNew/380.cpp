#include<bits/stdc++.h>

using namespace std;

const int N = 1e5 + 100;

int a[N] , n , t , j , ans , s;

int main()
{
	cin >> n >> t;
	for(int i = 1 ; i <= n ; i++)
	{
		cin >> s;
		a[i] = a[i - 1] + s;
		if(a[i] - a[j] > t)
			j++;
		ans = max(ans , i - j);
	}
	cout << ans;
}
