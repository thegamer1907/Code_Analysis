#include<bits/stdc++.h>
//#pragma comment(linker,"/STACK:1024000000,1024000000")
//251103FD
using namespace std;
#define PB pop_back
#define PF pop_front
#define np next_permutation
#define eb emplace_back
#define pb push_back
#define bf push_front
#define mp make_pair
#define s second
#define f first
#define mt make_tuple
#define foreach(it, a) for(__typeof((a).begin()) it=(a).begin(); it!=(a).end(); it++)
#define forn(i, a) for(int i=0; i<a; i++)
#define Forn(i, a) for(int i=1; i<=a; i++)
#define read(x) ((scanf("%s", &_), (x) = _))
#define INF 1e9
#define memINF 127
#define inf 1e18
#define all(x) x.begin(), x.end()
#define MOD 1e9+7 
#define HASH 1543 
#define FAST ios_base::sync_with_stdio(0)

typedef long long ll;
typedef pair<int,int> pi;
typedef pair<pi,int> pii;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef unsigned int uint;

using namespace std;

inline int in() 
{
    int x=0, c;
    for(; (uint)((c=getchar())-'0')>=10;) 
	{
		if(c=='-') 
			return -in(); 
		if(!~c)
			throw ~0;
	}
    do 
	{
		x=(x<<3)+(x<<1)+(c^48); 
	}
	while((uint)((c=getchar())^48)<10);
    return x;
}
inline int lcm(int a, int b){return a*b/__gcd(a, b);}
inline int extgcd(int a, int b, int&x, int&y)
{
    int d=a;
    if(b!=0)
        d=extgcd(b, a%b, y, x), y-=(a/b)*x;
    else
        x=1, y=0;
    return d;
}
inline int mod_inverse(int a, int m)
{
    int x, y;
    extgcd(a, m, x, y);
    return (m+x%m)%m;
}
int n, t;
bool dp[30005];

int main()
{
    n=in(), t=in();
	dp[0]=true;
	forn(i, n-1)
	   dp[i+in()] |=dp[i];
	if (dp[t - 1]) 
        puts("YES"); 
    else 
        puts("NO");
	return 0;
}