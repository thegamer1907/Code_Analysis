#include <bits/stdc++.h>
using namespace std;
char f[101],s[101],pw[2];
int n;
bool ex(char *s,char *e,char f)
{
    for(char *p = s;p<e;p++)
	if(*p==f)
	    return true;
    return false;
}
int main()
{
    int flag=1;
    scanf("%c%c",&pw[0],&pw[1]);
    scanf("%d",&n);
    for(int i=0;i<n&&flag;i++)
    {
	scanf(" %c%c",&f[i],&s[i]);
	if(f[i]==pw[0] && s[i]==pw[1])
	    flag=0;
    }
    if(ex(f,f+n,pw[1])&&ex(s,s+n,pw[0])||flag==0)
	printf("YES");
    else
	printf("NO");
}

