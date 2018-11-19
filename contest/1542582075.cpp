#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
typedef long long LL;
const int maxn = 1e5 + 5;

int h,m,s,t1,t2;

int main()
{
	scanf("%d %d %d %d %d",&h,&m,&s,&t1,&t2);

	int hl = h; 
	int hr = (hl + 1) % 12; if (hr == 0) hr = 12;

	int ml = 1.0 * m / 60 * 12; if (ml == 0) ml = 12;
	int mr = (ml + 1) % 12; if (mr == 0) mr = 12;

	int sl = 1.0 * s / 60 * 12; if (sl == 0) sl = 12;
	int sr = (sl + 1) % 12; if (sr == 0) sr = 12;
	

//	printf("ml = %d mr = %d sl = %d sr = %d\n",ml,mr,sl,sr);

	int ok = 0,p = t1,pp = t1;
	for (int i = 1;i <= 12;i++)
	{
		p = (p + 1) % 12; if (p == 0) p = 12;

		if ((pp == hl && p == hr) || (pp == ml && p == mr) || (pp == sl && p == sr)) break;
		if (p == t2) {ok = 1;break;}

	//	printf("p = %d\n",p);
		pp = p;
	}
	p = t1;pp = t1;
	for (int i = 1;i <= 12;i++)
	{
		p = (p - 1 + 12) % 12; if (p == 0) p = 12;
		
		
		if ((pp == hr && p == hl) || (pp == mr && p == ml) || (pp == sr && p == sl)) break;

		//printf("--- p = %d pp = %d \n",p,pp);

		if (p == t2) {ok = 1;break;}
		

		pp = p;
	}

	if (ok == 1) puts("YES");
	else puts("NO");
	

	return 0;
}