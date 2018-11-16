#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <time.h>
#include <map>
#include <set>
#include <vector>
#include <functional>
#include <algorithm>
#include <stack>
#include <list>
#include <cassert>
#include <queue>
#include <bitset>
// #include <iostream>
// #include <iomanip>
// #include <sstream>
using namespace std;
// const int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
// const int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
// const int dx[] = {2, 2, -2, -2, 1, 1, -1, -1};
// const int dy[] = {-1, 1, 1, -1, 2, -2, 2, -2};
#define all(cont) cont.begin(), cont.end()
#define rall(cont) cont.end(), cont.begin()
#define pb push_back
#define mp make_pair
#define fs first
#define sc second
#define pf printf
#define sf scanf
#define test_ fr(_iii_, 0, 66)pf(">");puts("in")
#define deb(x) fr(_iii_, 0, 66)cerr<<'>';cerr<<#x"="<<x<<"\n"
#define fr(i, a, b) for(int i = a ; i < (int)b ; i++)
#define frr(i, a, b) for(int i = a ; i >= (int)b ; i--)
#define tr(it, var) for(__typeof(var.begin()) it = var.begin(); it != var.end(); it++)
#define trr(rit, var) for(__typeof(var.rbegin()) rit = var.rbegin(); rit != var.rend(); rit++)
#define its(x) static_cast< ostringstream & >( ( ostringstream() << dec << x ) ).str()
#define boost ios_base::sync_with_stdio(false)
#define boost2 cin.tie(NULL)
#define ln puts("")
#define mems(a) memset(a, 0, sizeof(a))
#define has(cont, x) ((cont).find((x)) != (cont).end())
#define sz(x) ((int)(x).size())
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<bool> vb;
typedef vector<ll> vll;
int on_bit(int x, int pos) {x |= (1 << pos); return x;}
int off_bit(int x, int pos) {x &= ~(1 << pos); return x;}
bool is_on_bit(int x, int pos) {return ((x & (1 << pos)) != 0);}
int flip_bit(int x, int pos) {x ^= (1 << pos); return x;}
int lsb(int x) {return x & (-x);}
int on_bit_all(int x, int pos) {x = (1 << pos)-1; return x;}
const double EPS = 1e-9;
const double PI = 2*acos(0.0);
const int INF = 0x3f3f3f3f;
const int MOD = 1e9+7;
ll gcd(ll a, ll b) {return b?gcd(b,a%b):a;}

const int N = 123456;
char a[N];

int main() {
	sf("%s",a);
	int n = strlen(a);
	int labl=INF,rabl=INF,labr=-INF,rabr=-INF;
	int lbal=INF,rbal=INF,lbar=-INF,rbar=-INF;
	fr(i,0,n-1){
		if(a[i]=='A'&&a[i+1]=='B'){
			labl=min(labl, i);
			rabl=min(rabl, i+1);
			labr=max(labr, i);
			rabr=max(rabr, i+1);
		}
		if(a[i]=='B'&&a[i+1]=='A'){
			lbal=min(lbal, i);
			rbal=min(rbal, i+1);
			lbar=max(lbar, i);
			rbar=max(rbar, i+1);	
		}
	}
	// pf("%d %d %d %d\n", lbar, rabl, labr, rbal);
	puts(lbar>rabl || labr>rbal ? "YES" : "NO");
  return 0; 
} 