#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<ctime>
#include<queue>
#include<set>
#include<map>
#include<stack>
#include<bitset>
using namespace std;
int gi() {
	int w=0;bool q=1;char c=getchar();
	while ((c<'0'||c>'9') && c!='-') c=getchar();
	if (c=='-') q=0,c=getchar();
	while (c>='0'&&c <= '9') w=w*10+c-'0',c=getchar();
	return q? w:-w;
}
int o[100];
int main()
{
#ifndef ONLINE_JUDGE
	freopen("C.in","r",stdin);
	freopen("C.out","w",stdout);
#endif
	int n=gi(),k=gi(),s,i,j;
	while (n--) {
		s=0;
		for (i=0;i<k;i++) s=s<<1|gi();
		o[s]++;
	}
	
	//if (o[0]>1) return puts("YES"),0;
	for (i=0;i<1<<k;i++)
		for (j=0;j<1<<k;j++)
			if (o[i]&&o[j]&&(i&j)==0)
				return puts("YES"),0;
	puts("NO");
	return 0;
}
