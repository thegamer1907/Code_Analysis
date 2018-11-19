#include <bits/stdc++.h>
using namespace std;
int H, M, S, T1, T2;
int main(){
	scanf("%d %d %d %d %d", &H, &M, &S, &T1, &T2);
	if(T1 > T2)	swap(T1, T2);
	bool f[3] = {0,};
	if(T1 <= H && H < T2)	f[0] = true;
	if(T1 * 5 <= M && M < T2 * 5) f[1] = true;
	if(T1 * 5 <= S && S < T2 * 5) f[2] = true;
	if((f[0] & f[1] & f[2]) || (!f[0] & !f[1] & !f[2]))
		return puts("YES");
	return puts("NO");
}