#include <cstdio>
#include <cstring>
#include <algorithm>

template <typename Tp>Tp Max(const Tp &a, const Tp &b) {return a > b ? a : b;}
template <typename Tp>Tp Min(const Tp &a, const Tp &b) {return a < b ? a : b;}

template <typename Tp>void Read(Tp &x) {
    Tp in = 0, f = 1; char ch = getchar();
    while(ch<'0' || ch>'9') {if(ch=='-') f = -1; ch = getchar();}
    while(ch>='0' && ch<='9') {in = in*10+ch-'0'; ch = getchar();}
    x = in * f;
}

typedef long long LL;

const int SN = 100000 + 10;

LL f[SN][21], sum[SN], a[SN], vis[SN], RES, n, k, QL, QR;

void Insert(int x) {
    RES += vis[a[x]];
    vis[a[x]] ++;
}

void Erase(int x) {
    vis[a[x]]--;
    RES -= vis[a[x]];
}

void Query(int l, int r) {
    while(QL > l) Insert(--QL);
    while(QR < r) Insert(++QR);
    while(QL < l) Erase(QL++);
    while(QR > r) Erase(QR--);
}

void CDQ(int l, int r, int L, int R, int k) {
    if(l > r) return ;

    int mid = (l + r) >> 1, limits = Min(mid, R);

    int bet = limits;

    for(int i = L; i <= limits; i++) {
	if(i + 1 > mid) continue ;
	Query(i + 1, mid);
	if(f[i][k - 1] + RES < f[mid][k])
	    f[mid][k] = f[i][k - 1] + RES, bet = i;
    }

    CDQ(l, mid - 1, L, bet, k), CDQ(mid + 1, r, bet, R, k);
}

int main() {   
    Read(n), Read(k);

    for(int i = 1; i <= n; i++) Read(a[i]);

    memset(f, 0x3f, sizeof f);

    f[0][0] = 0;
    
    for(int i = 1; i <= n; i++) {
	sum[i] += vis[a[i]] + sum[i - 1];
	vis[a[i]] ++;
    }

    for(int i = 1; i <= n; i++)
	f[i][1] = Min(f[i][1], f[0][0] + sum[i]);

    for(int i = 1; i <= n; i++) vis[a[i]] = sum[i] = 0;

    QL = 1, QR = 1;

    vis[a[1]]++;
    
    for(int i = 2; i <= k; i++)
	CDQ(1, n, 1, n, i);

    printf("%lld\n", f[n][k]);

    return 0;
}
	     	 	   					 	  	 			 		 	