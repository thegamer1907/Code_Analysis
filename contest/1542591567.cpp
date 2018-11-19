#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

const int N=3;
int n;
char s1,s2,a1,a2;
bool p1,p2,o1,o2;

int main()
{
//	freopen("a.in","r",stdin);
	
	int i,j;
	scanf("%c%c",&s1,&s2);
	scanf("%d\n",&n);
	for(i=1;i<=n;++i)
	{
		scanf("%c%c\n",&a1,&a2);
		if(a1==s1&&a2==s2) {cout<<"YES";return 0;}
		if(a1==s2) p2=1;
		if(a2==s1) p1=1;
	}
	if((o1==1&&o2==1)||(p1==1&&p2==1)) cout<<"YES";
	else cout<<"NO";
	
	
	return 0;
}
