/** @Date    : 2017-10-05 14:57:57
  * @FileName: A.cpp
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

char s[110][2];
int main()
{
	char a[2];
	cin >> a;
	int n;
	cin >> n;
	int flag = 0;
	for(int i = 0; i < n; i++)
	{
		scanf("%s", &s[i]);
		if(s[i][0] == a[0] && s[i][1] == a[1])
			flag = 1;
	}
	/*for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(i != j && s[i][0] == a[0] && s[j][1] == a[1])
			{
				flag = 1;
				break;
			}
		}
	}*/
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(s[i][1] == a[0] && s[j][0] == a[1])
			{
				flag = 1;
				break;
			}
		}
	}
	printf("%s\n", flag?"YES":"NO");
    return 0;
}