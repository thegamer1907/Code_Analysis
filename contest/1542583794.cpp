#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;

char aa[2],bb[103][2];

int main() {
	double h,m,s,t1,t2;
	scanf("%lf%lf%lf%lf%lf",&h,&m,&s,&t1,&t2);
	if(t1 == 0) t1 = 12;
	if(t2 == 0) t2 = 12;
	if(t1 > t2)
		swap(t1,t2);
	t1 *= 5;t2 *= 5;h *= 5;
	if(s != 0) m += 0.5;
	if(m != 0) h += 0.5;
	if(h == 0) h = 60;
	if(m == 0) m = 60;
	if(s == 0) s = 60;
	/*if(t1 <= h && t1 <= m && t1 <= s && t2 >= h && t2 >= m && t2 >= s)
		printf("YES\n");
	if(t1 >= h && t1 >= m && t1 >= s && t2 <= h && t2 <= m && t2 <= s)
		printf("YES\n");*/
	bool flag = 0,ans = 0;
	double i;
	for(i = 1;i <= 60;i += 0.5) {
		if(i == t1) {
			flag = 1;
			continue;
		}
		if(flag && i == t2)
			ans = 1;
		if(flag && (i == h || i == m || i == s))
			flag = 0;
	}
	int count = 0;
	for(i = 1;i <= 60;i += 0.5) {
		if(i == t1)
			flag = 1;
		if(flag && i == h)
			count ++;
		if(flag && i == m)
			count ++;
		if(flag && i == s)
			count ++;
		if(flag && i == t2 && count == 3)
			ans = 1;
	}
	if(ans)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}
