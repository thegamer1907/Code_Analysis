#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <map>
using namespace std;

int n, flag, ans, pp, tt;
char a[10], s[105][10];
int main()
{
	pp = flag = ans = 0;
	scanf("%s", a);
	scanf("%d", &n);
	for(int i = 1; i <= n; i++)
	{
		scanf("%s", s[i]);
	}
	for(int i = 1; i <= n; i++)
	{
		if(s[i][1] == a[1] && s[i][0] == a[0]) flag = 1;
		else if(s[i][1] == a[0] && s[i][0] == a[1]) flag = 1;
	}
	for(int i = 1; i <= n; i++)
	{
		if(s[i][0] == a[1] && ans == 0) ans++;
		else if(s[i][1] == a[0]) {
			ans++;
			break;
		}
	}
	for(int i = 1; i <= n; i++)
	{
		if(s[i][1] == a[0] && pp == 0) pp++;
		else if(s[i][0] == a[1]) {
			pp++;
			break;
		}
	}
	for(int i = 1; i <= n; i++)
	{
		if(s[i][0] == a[0] && s[i][1] == a[0]) {
			tt++;
			break;
		}
	}
	for(int i = 1; i <= n; i++)
	{
		if(s[i][0] == a[1] && s[i][1] == a[1]) 
		{
			tt++;
			break;
		}
	}
	if(flag == 1 || ans == 2 || pp == 2 || tt == 2) {
		printf("YES\n");
	}
	else printf("NO\n");
	return 0;
}