#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cstdint>
#include<climits>
#include<numeric>
#include<bitset>
#include<stack>
#include<set>
#include<queue>
#include<map>
#include<cctype>
#include<string>
#include<cmath>
#include<cstring>
#include<iomanip>
#include<unordered_set>
#include<functional>
#include<iterator>
using namespace std;
const int N = 104;
int n, p[N], q[N];
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> p[i];
		q[p[i]] = i;
	}
	for (int i = 1; i <= n; i++) cout << q[i] << " ";


	getchar();
	getchar();
	return 0;
}