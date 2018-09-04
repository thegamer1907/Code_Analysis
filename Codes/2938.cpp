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

vector<int> zalgo(string s) {
	int n = s.size();
	vector<int> z(n);
	int x = 0, y = 0;
	for (int i = 1; i < n; i++) {
		z[i] = max(0,min(z[i-x],y-i+1));
		while (i+z[i] < n && s[z[i]] == s[i+z[i]]) {
			x = i; y = i+z[i]; z[i]++;
		}
	}
	return z;
}

void cant_make() {
	puts("Just a legend");
}

int32_t main () {
	//readfile("input.in");
	//writefile("output.out");
	string s;
	cin>>s;
	vector<int> z = zalgo(s);
	if(s.size() < 3) {
		cant_make();
		return 0;
	}
	vector<int> pre(s.size());
	pre[1] = z[1];
	for(int i=2; i<s.size(); i++) pre[i] = max(pre[i-1], z[i]);
	int at = 0;
	for(int i=s.size()-1; i>=2; i--) {
		if(z[i] == s.size()-i) {
			if(pre[i-1] >= z[i]) {
				at = i;
			}
		}
	}
	if(at == 0) {
		cant_make();
	}
	else {
		cout<<s.substr(at, s.size()-at)<<endl;
	}
	return 0;
}