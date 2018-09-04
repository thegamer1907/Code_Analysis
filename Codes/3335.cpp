#include <bits/stdc++.h>

using namespace std;

const int Maxn = 1e5 + 10;

int N, A[Maxn];

template <typename T> inline int read ()
{
	int x = 0, fl = 1; char c = getchar(); 
	while (!isdigit(c)) {if (c == '-') fl = -1; c = getchar();}
	while (isdigit(c)) x = x * 10 + c - '0', c = getchar();
	return x * fl;
}

int main()
{
#ifdef hk_cnyali
	freopen("B.in", "r", stdin);
	freopen("B.out", "w", stdout);
#endif
	N = read<int>();
	for (int i = 1; i <= N; ++i)
	{
		A[i] = read<int>();
		A[i] ++;
		A[i] = ceil(((double)A[i] - i) / N) * N + i;
//		cout<<A[i]<<endl;
	}
	int pos = 0;
	A[pos] = 0x3f3f3f3f;
	for (int i = 1; i <= N; ++i)
		if (A[i] < A[pos])
			pos = i;
	cout<<pos<<endl;
	return 0;
}
