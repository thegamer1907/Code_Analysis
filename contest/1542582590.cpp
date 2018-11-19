#include <cstdio>
#include <cstdlib>
#include <cstring>
//using namespace std;
int n,i,e=0;
char s[3],st[101][3];
int main () {
scanf ("%s",&s);
scanf ("%d",&n);
for (i=1;i<=n;i++) {
					scanf ("%s",&st[i]);
					if (strcmp(st[i],s)==0) e=1;
					}
if (e==1) {
			printf ("YES");
			return 0;
			}
for (i=1;i<=n;i++)
if (st[i][1]==s[0]) e=1;
if (e==0) {
			printf ("NO");
			return 0;
			}
for (i=1;i<=n;i++)
if (st[i][0]==s[1]) {
					printf ("YES");
					return 0;
}
printf ("NO");


return 0;
}