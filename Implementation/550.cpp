#include   <iostream>
#include    <cstring>
#include     <cstdio>
#include      <queue>
#include        <map>
#include      <cmath>
#include     <vector>
#include  <algorithm>
#include        <set>
#include      <stack>

#define mem(x,y) memset(x,y,sizeof(x))
#define INF   1e9
#define EPS   1e-6
#define MOD   1000000007
#define PI    3.141592654

typedef long long ll;

using namespace std;

int save[55];

int main()
{
    //freopen("c.in", "r", stdin);
    //freopen("c.out", "w", stdout);
    int n,k;
	int i,s=0;
	scanf("%d%d",&n,&k);
	for(i=1;i<=n;i++)
	scanf("%d",&save[i]);
	for(i=1;i<=n;i++)
	{
		if(save[i]>=save[k]&&save[i]!=0)
		s++;
    }
	printf("%d\n",s);
	//fclose(stdin);
    //fclose(stdout);
}