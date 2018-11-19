#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
	int h, m, s, t1, t2;
	scanf("%d%d%d%d%d", &h, &m, &s, &t1, &t2);
	double poss = 6.0*s;
	double posm = 0.1*(s + m * 60);
	double posh = 0.1 / 12.0 * ( h % 12 * 60 * 60 + m * 60 + s);
	double post1 = 30.0 * t1 , post2 = 30.0 * t2;
	double ss[10];
	ss[0] = poss; ss[1] = posm; ss[2] = posh; ss[3] = post1; ss[4] = post2;
	sort(ss, ss + 5);
	for (int i = 0; i < 5; i++)
	{
		if (ss[i] == post1&&ss[(i + 1) % 5] == post2 || ss[i] == post2&&ss[(i + 1) % 5] == post1)
		{
			puts("YES");
			return 0;
		}
	}
	puts("NO");


}