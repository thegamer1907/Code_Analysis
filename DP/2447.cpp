#include <bits/stdc++.h>
using namespace std;
#define ll                   long long
#define ld                   long double
#define II                   pair<int,int>
#define III                  pair<int, II>
#define F                    first
#define S                    second
#define _mp                  make_pair
#define VI                   vector<int>
#define VII                  vector<II>
#define _f                   front
#define _b                   back
#define _pb                  push_back
#define _pf                  push_front
#define _Pb                  pop_back
#define _Pf                  pop_front
#define _all(v)              v.begin(), v.end()
#define _memset(A, val)      memset(A, val, sizeof A)
#define __L                  p<<1, L, L+R>>1
#define __R                  p<<1|1, (L+R>>1)+1, R
#define LINE                 putc('\n', stdout)
#define SPACE                putc(' ' , stdout)
#define TAB                  putc('\t', stdout)
#define _out(_)              printf("%i",_)
#define __out(_,__)          printf("%i %i",_,__)
#define ___out(_,__,___)     printf("%i %i %i",_,__,___)
#define _outLL(_)            printf("%I64d",_)
#define __outLL(_,__)        printf("%I64d %I64d",_,__)
#define ___outLL(_,__,___)   printf("%I64d %I64d %I64d",_,__,___)
#define _outS(_)             printf("%s",_)
#define _outC(_)             printf("%c",_)
#define _in(_)               scanf("%i", &_)
#define __in(_,__)           scanf("%i%i",&_,&__)
#define ___in(_,__,___)      scanf("%i%i%i",&_,&__,&___)
#define _inLL(_)             scanf("%I64d", &_)
#define __inLL(_,__)         scanf("%I64d%I64d",&_,&__)
#define ___inLL(_,__,___)    scanf("%I64d%I64d%I64d",&_,&__,&___)
#define _inS(_)              scanf("%s",_)
#define __inS(_, __)         scanf("%s%s",_,__)
#define _inC(_)              scanf("%c",&_)
#define _YES                 printf("YES")
#define _NO                  printf("NO")
#define _Yes                 printf("Yes");
#define _No                  printf("No");
#define _yes                 printf("yes")
#define _no                  printf("no")
#define _for(i, n)           for(int i=0 ; i<n ; i++)
#define __for(i, j, n)       for(int i=j ; i<n ; i++)
#define FOR(i, condition)    for(int i=0 ; condition ; i++)
#define _rof(i, n)           for(int i=n ; i-- ;    )
#define __rof(i, j, n)       for(int i=n-1 ; i>=j ; i-- )
#define rm_imp(d, p)         (round(d*p)/p)
#define __lcm(a, b)          ((a*b)/__gcd(a,b))
#define _log2(x)             (31-__builtin_clz(x))
#define INF 2e8
#define Mod 1000000007
#define MAXN 100010
int memo[MAXN+100],t,n,k;
int dp(int rem)
{
	if(!rem)  return 1;
	if(rem<0) return 0;
	if(memo[rem]!=-1) return memo[rem];
	return memo[rem]=(dp(rem-1)+dp(rem-k))%Mod;
}
int main()
{
	__in(t, k);
	memset(memo, -1, sizeof memo);
	dp(MAXN);
	memo[0]=0;
	__for(i, 1, MAXN) memo[i]=(memo[i]+memo[i-1])%Mod;
	int a,b;
	while(t--){
		__in(a,b);
		_out((int)(((ll)memo[b]-memo[a-1]+Mod+Mod)%Mod)); LINE;
	}
}
