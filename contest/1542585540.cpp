/** @Date    : 2017-10-05 15:19:07
  * @FileName: B.cpp
  * @Platform: Windows
  * @Author  : Lweleth (SoungEarlf@gmail.com)
  * @Link    : https://github.com/
  * @Version : $Id$
  */
#include <bits/stdc++.h>
#define LL long long
#define PII pair<int ,int>
#define MP(x, y) make_pair((x),(y))
#define fi first
#define se second
#define PB(x) push_back((x))
#define MMG(x) memset((x), -1,sizeof(x))
#define MMF(x) memset((x),0,sizeof(x))
#define MMI(x) memset((x), INF, sizeof(x))
using namespace std;

const int INF = 0x3f3f3f3f;
const int N = 1e5+20;
const double eps = 1e-8;


int main()
{
	int h, m, s, t1, t2;
	cin >> h >> m >> s >> t1 >> t2;
	h = h % 12 * 5;
	t1 = t1 % 12 * 5;
	t2 = t2 % 12 * 5;
	int flag = 0;
	if(t1 > t2)
		swap(t1, t2);
	for(int i = t1; i <= t2; i++)
	{
		if(i == t2)
			flag = 1;
		if(i == h || i == m || i == s)
			break; 
	}
	for(int i = t2; ;i++)
	{
		i %= 60;
		if(i == t1)
			flag = 1;
		if(i == h || i == m || i == s)
			break;
	}
	printf("%s\n", flag?"YES":"NO");
    return 0;
}