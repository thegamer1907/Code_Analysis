#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
#define fup(i,a,b) for(int i=a; i<=b; ++i)
#define fwn(i,a,b) for(int i=b; i>=a; --i)

int n;
char m1, m2, m3, m4;
bool ok, okp, oks;

void deal()
{
}

int main()
{
	ok = okp = oks = 0;
	scanf(" %c %c", &m1, &m2);
	scanf("%d", &n);
	fup(tm,1,n)
	{
		scanf(" %c %c", &m3, &m4);
		if(m1==m3 && m2==m4)
			ok = 1;
		if(m1==m4)
			oks = 1;
		if(m2==m3)
			okp = 1;
	}
	ok |= okp&&oks;
	if(ok)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}