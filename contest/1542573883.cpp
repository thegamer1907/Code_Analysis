#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
char key[2],word[2];
int n;
bool ok[2];
int main()
{
	int i;
	scanf("%c%c",&key[0],&key[1]);
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		getchar();
		scanf("%c%c",&word[0],&word[1]);
		if((word[0]==key[0]&&word[1]==key[1])||(word[0]==key[1]&&word[1]==key[0]))
		{
			printf("YES");
			return 0;
		}
		if(word[1]==key[0]) ok[0]=true;
		if(word[0]==key[1]) ok[1]=true;
	}
	if(ok[0]&&ok[1]) printf("YES");
	else printf("NO");
	return 0;
}
