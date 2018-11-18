#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>

using namespace std;
#define INF 0x3f3f3f3f
#define Trav(p) for(rint u = first[p], v; ~u; u = e[u].nex)
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
int f[55][55][55][55], first[55], sz[55], d[55][55], tot, n, S, K, ans = INF;
struct Edge{int to,nex,w; Edge(){} Edge(int _to, int _nex, int _w){to=_to,nex=_nex,w=_w;}}e[105];
inline void Add(int a, int b, int w){e[tot] = Edge(b,first[a],w), first[a] = tot++, e[tot] = Edge(a,first[b],w), first[b] = tot++;}
void DFS_sz(int p, int fa){Trav(p) if((v=e[u].to)-fa) DFS_sz(v,p), sz[p] += sz[v];}
int Robot(int fa, int p, int s, int k)
{
	int &F = f[fa][p][s][k]; if(!k) F = 0; if(F<INF) return F;
	if(e[first[p]].nex==-1) return F = Robot(p,fa,k-s,k-s)+d[fa][p];
	int j, i, g[55]; g[0] = INF; for(i = 1; i <= K; g[i] = -INF, i++);
	Trav(p) if((v=e[u].to)-fa)
		for(j = s; j; j--)
			for(i = 1; i <= j; i++)
				g[j] = max(g[j],min(g[j-i],Robot(p,v,i,k)+d[fa][p])); return F = g[s];
}
int main()
{
	n = read(), memset(first+1,-1,n<<2);
	for(rint i = 2, u, v; i <= n; u = read(), v = read(), Add(u,v,d[u][v]=d[v][u]=read()), i++);
	S = read(); K = read(); for(rint i = 1; i <= K; ++sz[read()], i++); DFS_sz(S,0), memset(f,0x3f,sizeof f);
	Trav(S) v = e[u].to, ans = min(ans,Robot(S,v,sz[v],K)); printf("%d\n",ans); return 0;
}