#pragma GCC optimize("O3")
#pragma G++ optimize("O3")
#pragma comment(linker, "/STACK:1024000000,1024000000")
#include <bits/stdc++.h>
/*
#include <cstdio>
#include <cstring>
#include <queue>
#include <set>
#include <vector>
#include <cmath>
#include <algorithm>
 */
using namespace std;
#define LSON            id << 1 , l , mid
#define RSON            id << 1 | 1 , mid + 1 , r
#define LS              id << 1
#define RS              id << 1 | 1
#define ROOT            1 , 1 , n
#define clr(x , y)      memset(x , y , sizeof(x))
#define LOWBIT(x)       x & (-x)
#define FORN(i , a , n)  for(int i = (a) ; i <= (n) ; ++i)
#define FORP(i , n , a)  for(int i = (n) ; i >= (a) ; --i)
#define CASE(x)		printf("Case %d: ", x)
#define CASE#(x) printf("Case #%d: " , x)
#define SFD(x)      scanf("%lf" , &x)
#define SFC(x)      scanf(" %c" , &x)
#define SFS(x)      scanf(" %s" , x)
#define SFI(x)      scanf("%d" , &x)
#define SFI64(x)    scanf("%I64d" , &x)
#define PFF(x)         printf("%f" , x)
#define PFD(x)         printf("%lf" , x)
#define PFI(x)         printf("%d" , x)
#define PFC(x)         printf("%c" , x)
#define PFS(x)         printf("%s" , x)
#define PFI64(x)       printf("%I64d" , x)
#define SPACE          printf(" ")
#define PUT            puts("")
#define TEST           printf("pass\n");
#define LPUP(i , j , k) for(int i = j ; i <= k ; ++i)
#define LPDW(i , j , k) for(int i = j ; i >= k ; --i)
#define PB(x)          push_back(x)
#define ALL(A)         A.begin(), A.end()
#define SZ(A)          int((A).size())
#define LBD(A, x)      (lower_bound(ALL(A), x) - A.begin())
#define UBD(A, x)      (upper_bound(ALL(A), x) - A.begin())
#define LOCAL
static const double PI = acos(-1.0);
static const double EPS = 1e-8;
static const int SEED = 131;
static const int OO = 0X3fffffff;
typedef unsigned long long ULL;
typedef long long LL;
typedef double DB;
inline int read1()
{
    int x = 0;
    int f = 1 ; char ch = getchar();
    while (ch < '0' || ch > '9') {if (ch == '-') f = -1; ch = getchar();}
    while (ch >= '0' && ch <= '9') {x = (x << 1) + (x << 3) + (ch - '0'); ch = getchar();}
    x *= f;
    return x;
}

struct IO
{
	operator int()
	{
		int x = 0 , f = 1 ; char ch = getchar();
        while(ch < '0' || ch>'9') { if(ch == '-') f = -1;ch = getchar();}
        while(ch >= '0' && ch<='9'){ x = x * 10 + ch - '0'; ch = getchar();}
        return f > 0 ? x : -x;
	}
}read2;

/*namespace FastIO
{
    #define BUF_SIZE 100000
    #define OUT_SIZE 1000000
    bool IOerror=0;
    inline char nc()
    {
        static char buf[BUF_SIZE],*p1=buf+BUF_SIZE,*pend=buf+BUF_SIZE;
        if(p1==pend){
            p1=buf; pend=buf+fread(buf,1,BUF_SIZE,stdin);
            if (pend==p1){IOerror=1;return -1;}
        }return *p1++;
    }
    inline bool blank(char ch){return ch==' '||ch=='\n'||ch=='\r'||ch=='\t';}
    inline int reads(char *s)
    {
        char ch=nc();
        for(;blank(ch);ch=nc());
        if(IOerror)return 0;
        for(;!blank(ch)&&!IOerror;ch=nc())*s++=ch;
        *s=0;
        return 1;
    }
    inline int readi(int &a)
    {
        char ch=nc(); a=0;
        for(;blank(ch);ch=nc());
        if(IOerror)return 0;
        for(;!blank(ch)&&!IOerror;ch=nc())a=a*10+ch-'0';
        return 1;
    }
};
*/
inline void write(int x)
{
    if(x > 9)
    write(x / 10);
	putchar(x % 10 + '0');
}
namespace FastIO
{
	#define BUF_SIZE 100000
	//fread -> read
	bool IOerror = 0;
	inline char nc()
	{
		static char buf[BUF_SIZE], *p1 = buf + BUF_SIZE, *pend = buf + BUF_SIZE;
		if(p1 == pend)
        {
			p1 = buf;
			pend = buf + fread(buf, 1, BUF_SIZE, stdin);
			if(pend == p1)
			{
				IOerror = 1;
				return -1;
			}
		}
		return *p1++;
	}
	inline bool blank(char ch)
	{
		return ch == ' ' || ch == '\n' || ch == '\r' || ch == '\t';
	}
	struct READIO
	{
	    operator int()
	    {
	        char ch;int x = 0;
            while(blank(ch = nc()));
            if(IOerror)
                return 0;
            for(x = ch - '0'; (ch = nc()) >= '0' && ch <= '9'; x = x * 10 + ch - '0');
            return x;
	    }
	}reads;
	/*inline void read(int &x)
	{
		char ch;
		while(blank(ch = nc()));
		if(IOerror)
			return;
		for(x = ch - '0'; (ch = nc()) >= '0' && ch <= '9'; x = x * 10 + ch - '0');
	}*/
	#undef BUF_SIZE
};

/************************Little Pea****************************/
typedef long long ll;
static const int MAXN = 1e5 + 10;
map <string , int> r;
int a[MAXN][10];int d[10];int c[MAXN];
int n , k , w , e0 , e1;
int main()
{
#ifdef LOCAL
    //freopen("G:\\desktop\\littlepea\\in.data" , "r" , stdin);
#endif
    scanf("%d%d" , &n , &k);
    for(int i = 1 ; i <= n ; ++i)
    {
        for(int j = 1 ; j <= k ; ++j)
        {
            scanf("%d" , &a[i][j]);
            c[i] += a[i][j];
            d[j] += a[i][j];

            w = max(w , d[j]);
        }
        e0 += (c[i] == 0);
        e1 += (c[i] == 1);
    }
    if(w == n)
        return puts("NO") * 0;
    if(e1 > 0 || e0 > 0)
        return puts("YES") * 0;
    if(k < 4)
        return puts("NO") * 0;
    for(int i = 1 ; i <= n ; ++i)
    {
        string s = "";
        for(int j = 1 ; j <= k ; ++j)
        {
            s += char(a[i][j] + '0');
        }
        ++r[s];
    }
    if((r["1100"] > 0 && r["0011"] > 0 ) || (r["1010"] > 0 && r["0101"] > 0) || (r["1001"] > 0 && r["0110"] > 0) )
        return puts("YES") * 0;
    else
        puts("NO");


#ifdef LOCAL
    fclose(stdin);fclose(stdout);
#endif
}