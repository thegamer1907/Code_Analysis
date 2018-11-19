#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>

using namespace std;
#define MAXN 100000
#define INFLL 0x3f3f3f3f3f3f3fll
#define ll long long
#define rint register int
#define gc() getchar()
inline int read(rint ans = 0, rint sgn = ' ', rint ch = gc())
{
	for(; ch < '0' || ch > '9'; sgn = ch, ch = gc());
	for(; ch >='0' && ch <='9';(ans*=10)+=ch-'0', ch = gc());
	return sgn-'-'?ans:-ans;
}
#define BUF_SIZE 1000000
#define _END fwrite(_Ob,1,_O-_Ob,stdout), _O = _Ob
#define Outc(a) (*_O++ = a)
char _Ob[BUF_SIZE+5], *_O = _Ob, _Os[25], *_Ot;
template <typename T> inline void Out(T x)
{
	if(!x){Outc('0'); return;} if(x < 0) Outc('-'), x = -x;
	for(_Ot = _Os; x; *_Ot++ = x%10+'0', x /= 10);
	for(; _Ot != _Os; Outc(*--_Ot)); if(_O-_Ob >= BUF_SIZE-50) _END;
}
ll f[MAXN+5], t[MAXN+5], RES; int c[MAXN+5], a[MAXN+5], L, R, n, K;
inline void GEN(int l, int r)
{
	for(; L > l; --L, RES += c[a[L]]++);
	for(; R < r; ++R, RES += c[a[R]]++);
	for(; L < l; RES -= --c[a[L]], ++L);
	for(; R > r; RES -= --c[a[R]], --R);
}
void DP(int lef, int rig, int dl, int dr)
{
	if(lef > rig || dl > dr) return;
	if(dl == dr){for(rint i = lef; i <= rig; GEN(dl+1,i), t[i] = RES+f[dl], i++); return;}	
	static int mid, d; static ll c; mid = lef+rig>>1, c = INFLL;
	for(rint j = dl; j <= dr && j < mid; j++)
		if(GEN(j+1,mid), RES+f[j] < c) d = j, c = RES+f[j];
	t[mid] = c; DP(lef,mid-1,dl,d), DP(mid+1,rig,d,dr);
}
int main()
{
	n = read(), K = read(); for(rint i = 1; i <= n; a[i++] = read());
	L = 1, R = 0; for(rint i = 1; i <= n; GEN(1,i), f[i] = RES, i++);
	for(rint k = 2; k <= K; DP(1,n,1,n), memcpy(f+1,t+1,n<<3), k++); printf("%I64d\n",f[n]); return 0;
}