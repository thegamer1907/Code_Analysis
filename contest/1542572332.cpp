#include <cstdio>
using namespace std;
int n,i,q[505],h[505];char st[50],lj[50]; 
int main()
{
	scanf("%s",st);
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		scanf("%s",lj);
		if (lj[0]==st[0] && lj[1]==st[1]){printf("YES");return 0;}
		q[lj[0]]++; h[lj[1]]++;
	}
	if (q[st[1]] && h[st[0]]) printf("YES");else printf("NO");
}