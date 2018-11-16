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
#include <queue>
#include <bitset>
// #include <iostream>
// #include <iomanip>
// #include <sstream>
using namespace std;
// const int dx[] = {0, 1, 0, -1};
// const int dy[] = {1, 0, -1, 0};
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
int add(ll a, ll b){return ((a%MOD)+(b%MOD))%MOD;}
int sub(ll a, ll b){return ((a%MOD)-(b%MOD))%MOD;}
int mult(ll a, ll b){return ((a%MOD)*(b%MOD))%MOD;}
ll gcd(ll a, ll b) {return b?gcd(b,a%b):a;}

const int N = 1e5+5;
char a[N];
int psum[N];

int main(){
	sf("%s",a);
	int n=strlen(a);
	psum[0]=0;
	fr(i,1,n){
		psum[i]=psum[i-1]+(a[i]==a[i-1]);
	}
	int m;
	sf("%d",&m);
	fr(i,0,m){
		int l,r;
		sf("%d%d",&l,&r);
		l--;r--;
		pf("%d\n",psum[r]-psum[l]);
	}
	return 0;
}