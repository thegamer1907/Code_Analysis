#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define up(i,j,n)		for (int i = j; i <= n; i++)
#define down(i,j,n)	for (int i = j; i >= n; i--)
#define cmax(a,b)		a = max (a, b)
#define cmin(a,b)		a = min (a, b)

int H, M, S, T1, T2;

int main(){
	scanf("%d%d%d%d%d", &H, &M, &S, &T1, &T2);
	H %= 12; T1 %= 12; T2 %= 12;
	H *= 5; T1 *= 5; T2 *= 5;
	H = H * 3600 + M * 60 + S;
	M = M * 3600 + S;
	S = S * 3600;
	T1 = T1 * 3600;
	T2 = T2 * 3600;
	if (T1 > T2) swap(T1, T2);
	if ((H > T1 && H < T2) || (M > T1 && M < T2) || (S > T1 && S < T2)) {
		if (H < T1 || H > T2 || M < T1 || M > T2 || S < T1 || S > T2) 
			puts("NO");
		else puts("YES");
	}else puts("YES");
	return 0;
}
