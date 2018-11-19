#include <cstdio>

int n;
char p[10];
char a[110][10];

int main()
{
	scanf("%s %d", p, &n);
	for(int i=0; i<n; i++)
		scanf("%s", a[i]);

	for(int i=0; i<n; i++)
		if(p[0]==a[i][0] && p[1]==a[i][1])
		{
			printf("YES\n");
			return 0;
		}

	bool s=false, e=false;
	for(int i=0; i<n; i++)
	{
		if(p[0] == a[i][1])
			s = true;
		if(p[1] == a[i][0])
			e = true;
	}
	printf("%s\n", s&&e? "YES" : "NO");
	return 0;
}
