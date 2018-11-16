#include <bits/stdc++.h>

using namespace std;
const int N = 1e5 + 100;
int arr[N];

int main()
{
	int t = 0, ans = 0;
	string b;
	int n, s = 0;
	cin >> n;
	for (int i = 0; i < n; i ++){
		cin >> b;
		if (b == "0"){
			t ++;
			ans = max(t, ans);
		}
		if (b == "1"){
			s ++;
			if (t > 0) t --;
		}
	}
	ans = max(ans, t);
	if (s == n)
		return cout << s - 1, 0;
	cout << s + ans;
	return 0; 
}
