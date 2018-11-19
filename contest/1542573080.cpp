/** @Date    : 2017-10-05 15:56:21
  * @FileName: C.cpp
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

/*
int a[N][5];
vector<int>q[5];
vector<int>s;
int vis[17];
int main()
{
	int n, k;
	cin >> n >> k;
	int flag;
	for(int i = 0; i < n; i++)
	{
		int cnt = 0;
		int x = 0;
		for(int j = 0; j < k; j++)
		{
			scanf("%d", &a[i][j]);
			x <<= 1;
			x += a[i][j];
			if(a[i][j] == 0)
				q[j].PB(i), cnt++;
		}
		if(cnt >= 1 && !vis[x])
			s.emplace_back(i), vis[x] = 1;
	}
	for(int i = 0; i < n; i++)
	{
		flag = 0;
		for(int j = 0; j < k; j++)
		{
			if(a[i][j] == 1)
			{
				flag = 1;
				break;
			}
		}
		if(flag == 0)
		{
			printf("YES\n");
			return 0;
		}
	}
	for(int i = 0; i < k; i++)
	{
		if(q[i].size() == 0)
		{
			printf("NO\n");
			return 0;
		}
	}
	//cout << "~";
	for(int i = 0; i < s.size(); i++)
	{
		for(int j = i + 1; j < s.size(); j++)
		{
			flag = 0;
			for(int l = 0; l < k; l++)
			{
				if(a[s[i]][l] == a[s[j]][l] && a[s[i]][l] == 1)
				{
					//cout << i << j <<endl;
					flag = 1;
					break;
				}
			}
			if(flag == 0)
			{
				printf("YES\n");
				return 0;
			}
		}
	}
	printf("NO\n");
    return 0;
}
*/
int n, k, vis[17], x, y;
int main(){
	cin >> n >> k;
	for(int i = 0; i < n; i++){
		x = 0;
		for(int j = 0; j < k; j++){
			scanf("%d", &y), x = x * 2 + y;
		}
		vis[x] = 1;
	}
	for(int i = 0; i <= (1<<k); i++)
		for(int j = 0; j <= (1<<k); j++)
			if((i & j) == 0 && vis[i] && vis[j]){
				printf("YES\n");
				return 0;
			}
	printf("NO\n");
	return 0;
}