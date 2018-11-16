#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;

int a[110][4];

int main()
{
	int n = 0;
	scanf("%d", &n);
	for(int i=0; i<n; i++)
		for(int j=0; j<3; j++)
			scanf("%d", &a[i][j]);

	int flag = 1;
	for(int i=0; i<3; i++)
	{
		int ans = 0;
		for(int j=0; j<n; j++)
			ans += a[j][i];
			
		if(ans!=0)
		{
			flag = 0;
			break;
		}
	}
	if(flag==1)
		printf("YES\n");
	else
		printf("NO\n");
	
	return 0;
}