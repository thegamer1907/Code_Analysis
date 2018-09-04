#include <bits/stdc++.h>
#define b 37ll
#define ll unsigned long long
using namespace std;
ll has[1000005],p[1000005],st[1000005];
int l[1000005],cnt=0;
char s[1000005];
inline ll get(int a,int c)
{return has[c]-has[a-1]*p[c-a+1];}
int main (){
	//freopen ("article.in","r",stdin);
	//freopen ("article.out","w",stdout);
	scanf ("%s",s+1);
	int len=strlen(s+1),i;
	p[0]=1ll;
	for (i=1;i<=len;i++)
	{has[i]=has[i-1]*b+(s[i]-'a'+1);
	p[i]=p[i-1]*b;
	}
	for (i=1;i<=len;i++)
	{if (get(1,i)==get(len-i+1,len))
	{l[++cnt]=i;st[cnt]=get(1,i);}
	}
	int lt=1,rt=cnt;
	while (lt<=rt)
	{int mid=(lt+rt)>>1,tag=0;
	for (i=2;i<=len-l[mid];i++)
	{if (get(i,i+l[mid]-1)==st[mid])
	{tag=1;break;}
	}
	if (tag) {lt=mid+1;}
	else {rt=mid-1;}
	}
	if (rt==0)
	{puts("Just a legend");
	return 0;
	}
	for (i=1;i<=l[rt];i++)
	{putchar(s[i]);}
	return 0;
}