#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
#define ms(x,y) memset(x,y,sizeof(x))
using namespace std;

typedef long long ll;

const double pi = acos(-1.0);
const int mod = 1e9 + 7;
const int maxn = 1e5 + 5;

int a[100];

int main()
{
	//freopen("in.txt","r",stdin);
	//freopen("out.txt","w",stdout);
	int n,k;
	cin>>n>>k;
	for(int i=0;i<n;i++)
	{
		int temp = 0;
		for(int j=0;j<k;j++)
		{
			int x;
			cin>>x;
			temp+=((1<<j))*x;
		}
		a[temp] = 1;
	}
	int flag = 0;
	for(int i=0;i<=16;i++)
	{
		for(int j=0;j<=16;j++)
		{
			if(!a[i]||!a[j]) continue;
			if((i&j)==0)
			{
				flag = 1;
				break;
			}
		}
	}
	if(flag) printf("YES\n");
	else
		printf("NO\n");
	return 0;
}