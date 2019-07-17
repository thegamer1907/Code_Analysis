#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<queue>
#include<string>
#include<cmath>
#include<ctime>
#include<vector>
#include<stack>
#define bug cout << "**********" << endl
using namespace std;
typedef long long ll;
const int inf = 0x3f3f3f3f;
const int mod = 1e8;
const int Max = 1e5 + 10;

ll n, m, k;
ll a[Max];

int main()
{
	while (cin >> n >> m >> k)
	{
		for (int i = 1;i <= m; i++)
			cin >> a[i],a[i]--;
		int t = 0;
		int sum = 0;
		int e = 0;
		int now = k * ((a[1] - e) / k);	//表示当前区间
		for (int i = 1; i <= m;i++)
		{
			if(now + k > (a[i]-e))
			{
				t++;		//记录当前区间的特殊数个数
			}
			else
			{
				
				//cout << "t: " << t << " now: " << now << endl;
				e += t;
				t = 0;
				now = k * ((a[i] - e) / k);
				sum++;
				//cout << "sum: " << sum << " now: " << now << endl;
				i--;
			}
		}
		if(t != 0)
		{
			sum++;
		}
		cout << sum << endl;
	}
	return 0;
}