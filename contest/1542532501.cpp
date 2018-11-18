#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<string>
#include<cmath>
#include<algorithm>
#include<map>
#include<vector>
using namespace std;
const int MaxN = 1e2;

int main()
{
	float h,m,s,t1,t2,vis;
	while(~scanf("%f %f %f %f %f",&h,&m,&s,&t1,&t2))
	{
		if(s != 0) m += 0.5;
		if(s != 0) h += 0.5;
		m /= 5;
		s /= 5;
		if(h > 12) h -= 12;
		if(m > 12) m -= 12;
		if(s > 12) s -= 12;
		if(t1 > t2)
		{
			vis = t1;
			t1 = t2;
			t2 = vis;
		}
		vis = 0;
		if(h < t2 && h > t1) vis++;
		if(m < t2 && m > t1) vis++;
		if(s < t2 && s > t1) vis++;
		if(vis == 0||vis == 3) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}