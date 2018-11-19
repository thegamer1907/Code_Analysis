#include<bits/stdc++.h>
using namespace std;
int ans[1024*2];
int main()
{
	int h, m, s, t1, t2;
	while (cin >> h >> m >> s >> t1 >> t2)
	{

		memset(ans, 0, sizeof ans);
		int flag = 0,flag1 = 0;
		if(s*2%(120)==0&&m*2%(120)==0) ans[h*10%(120)] = 1;
		else ans[(h * 10 + 1) % 120] = 1;

		if ((s*2)%120 == 0)ans[(m*2) % (120)] = 1;
		else ans[(m * 2 + 1)%120] = 1;
        ans[(s*2)%120] = 1;
        //cout<<s*2<<endl;
		for (int i = t1 * 10;; ++i)
		{
		   // cout<<i<<" "<<endl;
			i %= 120;
			if (i == t2 * 10%120)break;
			if (ans[i]) flag = 1;
		}
		for (int i = t1 * 10;; --i)
		{

			i = (i + 120) % 120;
			if (i == t2 * 10%120)break;
			if (ans[i])
			{
				//cout << i << endl;
				flag1 = 1;
			}
		}
		if (flag&&flag1)cout << "NO\n";
		else cout << "YES\n";
	}
	return 0;
}///10 5 30 1 12
