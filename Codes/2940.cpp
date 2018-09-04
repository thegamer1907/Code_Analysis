#include <bits/stdc++.h>
using namespace std;

#define clock_starts() clock_t begin = clock()
#define clock_ends() clock_t end = clock()
#define print_running_time() double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC; \
printf("Elapsed Time : %.10f second(s)\n", elapsed_secs)
#define readfile(s) freopen(s, "r", stdin)
#define writefile(s) freopen(s, "w", stdout)
#define debug(s) cout<< #s <<" = "<< s <<endl
#define all(v) v.begin(), v.end()
#define cin_cout_is_cool ios_base::sync_with_stdio(false); cin.tie(NULL)
#define printBinary(n) cout << #n << " = " << bitset<64>(n) << endl
#define min_pq priority_queue<int, vector<int>, greater<int> >
#define MEMSET(a,val) memset(a, val, sizeof a)
#define PB push_back
#define endl '\n'
#define cin(n) scanf("%d", &n)
#define myrand(a, b) ((((rand() << 15) ^ rand()) % ((b) - (a) + 1)) + (a))
#define popcount(x) __builtin_popcount(x)
#define popcountll(x) __builtin_popcountll(x)

template<typename T>T max(T a_,T b_,T c_) { return max(a_,max(b_,c_)); }
template<typename T>T min(T a_,T b_,T c_) { return min(a_,min(b_,c_)); }

//int dx[] = {-1, +0, +1, +0};
//int dy[] = {+0, +1, +0, -1};

typedef pair<int, int> ii;
typedef pair<long, long> pll;
typedef pair<double, double> pdd;

#define ceil(num,d) 		( (int)(num/d) + (num%d>0 ? 1 : 0) )
#define block_no(idx) 		( ceil(idx, BLOCK_SIZE) )
#define block_starting(idx) ( ((block_no(idx)-1) * BLOCK_SIZE) +1 )
#define block_ending(idx) 	( min(n, block_no(idx)*BLOCK_SIZE) )
#define block_ranking(idx) 	((idx%BLOCK_SIZE==0)?BLOCK_SIZE:idx%BLOCK_SIZE)

#define int long long

const int maxn = 1000010;

int bigmod(int b, int p, int m, int ret = 1) {
	while(p) {
		if(p & 1) ret = (ret * b) % m;
		p >>= 1, b *= b, b %= m;
	} return ret;
}

int base[] = {401, 541, 691};
int mod[] = {999990011, 999994603, 999999937};
int inv[3][maxn], po[3][maxn];

struct hashval {
	int val[3];
	hashval() { memset(val, 0, sizeof val); }
	hashval(int _x) {
		val[0] = _x; //val[1] = _y; //val[2] = _z;
	}
	bool operator < (const hashval &temp) const {
		for(int i=0; i<1; i++) {
			if(val[i] != temp.val[i]) return val[i] < temp.val[i];
		} return false;
	}
	bool operator == (const hashval &temp) const {
		for(int i=0; i<1; i++) if(val[i] != temp.val[i]) return false; return true;
	}
	bool operator != (const hashval &temp) const {
		return !(*this == temp);
	}
};char s[maxn];

struct FullHash {
	vector<int> h[3];
	FullHash() {}
	FullHash(int N) {
		h[0].reserve(N+10);
		//h[1].reserve(N+10);
		//h[2].reserve(N+10);
		h[0].assign(N+10, 0);
		//h[1].assign(N+10, 0);
		//h[2].assign(N+10, 0);
		for(int i=0; i<1; i++) {
			for(int j=1; j<=N; j++) {
				h[i][j] = (h[i][j-1] + po[i][j]*s[j]) % mod[i];
			}
		}
	}
	hashval SubStringHash(int i, int j) {
		int p = (((h[0][j] - h[0][i-1] + mod[0]) % mod[0]) * inv[0][i-1]) % mod[0];
		//int q = (((h[1][j] - h[1][i-1] + mod[1]) % mod[1]) * inv[1][i-1]) % mod[1];
		//int r = (((h[2][j] - h[2][i-1] + mod[2]) % mod[2]) * inv[2][i-1]) % mod[2];
		return hashval(p);
	}
};

void PrepareForHash() {
	for(int i=0; i<1; i++) {
		po[i][0] = 1;
		for(int j=1; j<=1000000; j++) {
			po[i][j] = (po[i][j-1] * base[i]) % mod[i];
		}
		inv[i][0] = 1; inv[i][1] = bigmod(po[i][1], mod[i]-2, mod[i]);
		for(int j=1; j<=1000000; j++) {
			inv[i][j] = (inv[i][j-1] * inv[i][1]) % mod[i];
		}
	}
}


int n, lcp[maxn], pre[maxn];
FullHash H;

int getlcp(int i) {
	if(s[1] != s[i]) return 0;
	int ret = 0;
	int lo = 1, hi = n-i+1;
	int mid = (lo + hi) >> 1;
	while(lo <= hi) {
		if(H.SubStringHash(1, mid) == H.SubStringHash(i, i+mid-1)) {
			ret = mid, lo = mid+1;
		} else hi = mid-1;
		mid = (hi + lo) >> 1;
	} return ret;
}

int32_t main () {
	//clock_starts();
	//readfile("input.in");
	//writefile("output.out");
	PrepareForHash();
	scanf("%s", s+1);
	n = strlen(s+1);
	if(n < 3) {
		puts("Just a legend");
		return 0;
	}
	H = FullHash(n);
	for(int i=1; i<=n; i++) lcp[i] = getlcp(i);
	pre[2] = lcp[2];
	for(int i=3; i<=n; i++) pre[i] = max(pre[i-1], lcp[i]);
	int at = 0;
	for(int i=n; i>=3; i--) {
		if(lcp[i] == n-i+1) {
			if(pre[i-1] >= lcp[i]) {
				at = i;
			}
		}
	}
	if(at == 0) {
		puts("Just a legend");
	}
	else {
		puts(s+at);
	}
	//clock_ends();
	//print_running_time();
	return 0;
}