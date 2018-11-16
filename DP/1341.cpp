#include<iostream>
#include<string>
#include<vector> 
#include<algorithm>
#include<cstring>
#define MS(x) memset(x,0,sizeof(x))
#define MS1(x) memset(x,-1,sizeof(x))
using namespace std;
int a[105];
int main()
{
	ios::sync_with_stdio(false);
	int n;
	while (cin >> n)
	{
		int sum = 0;
		bool flag = true;
		for (int i = 1; i <= n; i++)
		{
			cin >> a[i];
			if (a[i]) sum++;
			if (!a[i]) flag = false;
		}
		int count = 0;
		int ans = sum;
		for (int i = 1; i <= n; i++)
		{
			int cur = sum;
			for (int j = i;j <= n; j++)
			{
				if (a[j]) cur--;
				else
				{
					cur++;
					if (cur > ans) ans = cur;
				}
			}
		}
		if (flag) ans--;
		cout << ans << endl;
	}
}