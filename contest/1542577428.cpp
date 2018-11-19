#include<cstdio>

int main()
{
	int h, m, s, t1, t2;
	scanf("%d %d %d %d %d", &h, &m, &s, &t1, &t2);
	
	bool clock[30] = {0}; // 1, 1to2, 2, 2to3, ...
	
	if(m == 0 && s == 0) clock[2*h-1] = 1;
	else clock[2*h] = 1;
	
	int val = m/5;
	if(val == 0) val = 12;
	
	if(s == 0 && m % 5 == 0) clock[2*val-1] = 1;
	else clock[2*val] = 1;
	
	val = s / 5;
	if(val == 0) val = 12;
	
	if(s % 5 == 0) clock[2*val-1] = 1;
	else clock[2*val] = 1;
	// clockwise
	
	clock[0] = clock[24];
	
	for(int i=t1; i!=t2; i++)
	{
		if(i > 12) i = 1;
		if(i == t2) break;
		if(clock[2*i-1]) break;
		if(clock[2*i]) break;
		if(i+1 == t2 || (i+1 == 13 && t2 == 1))
		{
			puts("YES");
			return 0;
		}
	}
	
	for(int i=t1; i!=t2; i--)
	{
		if(i < 1) i = 12;
		if(i == t2) break;
		if(clock[2*i-1]) break;
		if(clock[2*i-2]) break;
		if(i-1 == t2 || (i-1 == 0 && t2 == 12))
		{
			puts("YES");
			return 0;
		}
	}
	puts("NO");
}