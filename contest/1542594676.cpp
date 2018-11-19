#include<cstdio>

char pass[2];
int n;
char test[110][2];
bool hack;

int main()
{
	scanf(" %s",pass);
	scanf("%d",&n);
	for(int i=0;i<n;i++) scanf(" %s",test[i]);

	for(int i=0;i<n;i++) if(pass[0]==test[i][0]&&pass[1]==test[i][1]) hack=true;
	for(int i=0;i<n;i++) for(int j=0;j<n;j++) if(pass[0]==test[i][1]&&pass[1]==test[j][0]) hack=true;

	hack?puts("YES"):puts("NO");

	return 0;
}
