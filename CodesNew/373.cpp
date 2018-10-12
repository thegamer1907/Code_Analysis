#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<string>
#include <vector>
#include <iomanip> 
#include<algorithm>
#include <cstdio>
#include <cstring>
#include<map>
#include<set>
#include<math.h>
#include<unordered_map>
using namespace std;
set<pair<int, int>> pc;
typedef long long ll;
long double pi = acos(-1);
vector<int> v;
int h[100005], a[100005], home[100005],away[100005];
vector<pair<string, string>>str;
int main()
{
ios::sync_with_stdio(false);
	int  n,m,d,count=0,mx=0,mn=10000006,ind=0;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		while (m<a[i])
		{
			m += a[ind];
			ind++;
			count--;
		}
		m -= a[i];
		count++;
		mx = max(mx, count);
	}
	
	cout << mx << endl;
	return 0;
}