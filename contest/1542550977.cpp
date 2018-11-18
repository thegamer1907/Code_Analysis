#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <bitset>

using namespace std;

const int NMAX = 110, MMAX = 110, KMAX = 13;

int N, M;
bitset<1<<KMAX> mask[NMAX + MMAX][KMAX];
string left[NMAX + MMAX], right[NMAX + MMAX];

int main()
{
	int i, j, k, tmp, x, y, ans;
	char buf[NMAX];
	string buf2;
	scanf("%d", &N);
	for(i = 1;i <= N;i += 1)
	{
		scanf("%s", buf);
		buf2 = buf;
		mask[i][0].set(0);
		for(j = 1;j <= KMAX;j += 1)
		{
			for(k = tmp = 0;buf[k];k += 1)
			{
				tmp = ((tmp<<1) + buf[k] - '0') & ((1<<j) - 1);
				if(k + 1 >= j)
					mask[i][j].set(tmp);
			}
		}
		left[i] = buf2.substr(0, KMAX);
		right[i] = buf2.substr(max(0, k - KMAX), KMAX);
	}
	scanf("%d", &M);
	for(i = 1;i <= M;i += 1)
	{
		scanf("%d %d", &x, &y);
		for(j = 0;j <= KMAX;j += 1)
			mask[N + i][j] = mask[x][j] | mask[y][j];
		buf2 = right[x] + left[y];
		ans = 0;
		for(j = 1;j <= KMAX;j += 1)
		{
			for(k = tmp = 0;k < buf2.size();k += 1)
			{
				tmp = ((tmp<<1) + buf2[k] - '0') & ((1<<j) - 1);
				if(k + 1 >= j)
					mask[N + i][j].set(tmp);
			}
			if(mask[N + i][j].count() == (1<<j))
				ans = j;
		}
		left[N + i] = (left[x] + left[y]).substr(0, KMAX);
		right[N + i] = right[x] + right[y];
		right[N + i] = right[N + i].substr(max(0, (int)right[N + i].size() - KMAX), KMAX);
		printf("%d\n", ans);
	}
	exit(0);
}
