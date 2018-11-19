#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

const int MAXN = 1e3;

int sum[MAXN + 5];
int h, m, s, t1, t2;

int main()
{
	scanf("%d %d %d %d %d", &h, &m, &s, &t1, &t2);	
	t1 = t1 * 5, t2 = t2 * 5;
	sum[s]++, sum[m]++, sum[m + 1]++;
	sum[s + 60]++, sum[m + 60]++, sum[m + 1 + 60]++;
	int a = h * 5;
	int b = 0, c = 0;
	while(b <= 60){
		if(m >= b && m < b + 12) break;
		c++, b += 12;
	}
	sum[a + c]++, sum[a + c + 1]++;
	sum[a + c + 60]++, sum[a + c + 1 + 60]++;
	for(int i = 1; i <= 300; i++) sum[i] += sum[i - 1];
	if(t1 < t2) swap(t1, t2);
	bool check = true;
	//printf("%d %d\n", sum[t1], sum[t2]);
	if(sum[t1 - 1] - sum[t2] <= 0) check = false;
	if(sum[t2 + 60 - 1] - sum[t1] <= 0) check = false;
	if(check) printf("NO\n");
	else printf("YES\n");
}