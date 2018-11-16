/**
 *      author : azhar556
 *      31 October 2018   2:45 AM (+7)
**/

#include <bits/stdc++.h>
#define pb(a) push_back(a)
#define all(a) a.begin(), a.end()

using namespace std;

typedef double db;
typedef long long i64;

const int MAX = 1e9 + 7;
const db PI = acos(-1.0);

void solve() 
{
	int n;
	cin >> n;
	
	int one = 0;
	vector<int> arr(n);
	for (int a = 0; a < n; a++)
	{
		cin >> arr[a];
		if (arr[a])
			one++;
	}

	if (one == n)
	{
		cout << n - 1;
		return;
	}
	
	int res = 0; 
	for (int a = 0; a < n; a++)
	{
		int val = one;
		for (int b = a; b < n; b++)
		{
			if (arr[b])
				val--;
			else
				val++;
				
			res = max(res, val);
		}
	}
	
	cout << res;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    solve();
    
    cerr << endl << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << "s.\n";
    return 0;
}