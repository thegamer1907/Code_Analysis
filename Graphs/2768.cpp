#include <stdio.h>
#define C 100001

int n, m, s, a, i;
bool dead[C];

int main(){
	scanf ("%d %d", &n, &m);
	m*=2;
	while (m--){
		scanf ("%d", &a);
		dead[a]=1;
	}
	printf ("%d\n", n-1);
	for (i=1;i<=n;i++)	if (dead[i]==0)	break;
	s=i;
	for (i=1;i<=n;i++)	if (i!=s)	printf ("%d %d\n", s, i);	
return 0;}