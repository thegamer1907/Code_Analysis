#define _CRT_SECURE_NO_DEPRECATE
#pragma comment(linker, "/STACK:102400000,102400000")
#include<iostream>  
#include<cstdio>  
#include<fstream>  
#include<iomanip>
#include<algorithm>  
#include<cmath>  
#include<deque>  
#include<vector>
#include<bitset>
#include<queue>  
#include<string>  
#include<cstring>  
#include<map>  
#include<stack>  
#include<set>
#include<functional>
#define pii pair<int, int>
#define mod 1000000007
#define mp make_pair
#define pi acos(-1)
#define eps 0.00000001
#define mst(a,i) memset(a,i,sizeof(a))
#define all(n) n.begin(),n.end()
#define lson(x) ((x<<1))  
#define rson(x) ((x<<1)|1) 
#define inf 0x3f3f3f3f
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

class T {
public:
	int t[5];
	bool operator<(const T&b)const
	{
		return t[1] != b.t[1] ? t[1] < b.t[1] : t[2] != b.t[2] ? t[2] < b.t[2] : t[3] != b.t[3] ? t[3] < b.t[3] : t[4] < b.t[4];
	}
};

set<T>a;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int i, j, k, m, n;
	cin >> n >> m;
	for (int i = 1; i <= n; ++i)
	{
		T temp;
		for (int j = 1; j <= 4; ++j)temp.t[j] = 0;
		for (int j = 1; j <= m; ++j)cin >> temp.t[j];
		a.insert(temp);
	}
	for (auto it = a.begin(); it != a.end(); ++it)
	{
		auto pt = it;
		for (auto itt = pt; itt != a.end();++itt)
		{
			if (it->t[1] + itt->t[1] <= 1 && it->t[2] + itt->t[2] <= 1 && it->t[3] + itt->t[3] <= 1 && it->t[4] + itt->t[4] <= 1)
			{
				cout << "YES" << endl;
				return 0;
			}
		}
	}

	cout << "NO" << endl;
	return 0;
}