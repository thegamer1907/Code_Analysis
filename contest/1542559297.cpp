#include<bits/stdC++.h>
using namespace std;
vector<int> v;
bool ans;
int used[20], a[100005][5];
int main()
{
	int n, k, t;
	cin >> n >> k;
	for(int i = 1; i <= n; i++)
	{
		int num = 0;
		for(int j = 1; j <= k; j++)
		cin >> t, num += t*pow(2, k - j), a[i][j] = t;
		if(used[num] == 0)
		v.push_back(num), used[num] = 1;
	}
	if(v.size() == 1)
	{
		int c = 0;
		for(int i = 1; i <= k; i++)
		if(a[1][i]) c++;
		if(c == 0) ans = true;
 	}
	for(int i = 0; i < v.size(); i++)
		for(int j = i + 1; j < v.size(); j++)
			if((v[i]&v[j]) == 0) ans = true;
	if(ans == true)
	cout << "YES" ;
	else cout << "NO";
}