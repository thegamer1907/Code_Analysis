#include <vector>
#include <map>
#include <set>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
#define rep(i,lo,hi) for(int i=(lo);i<=(hi);++i)
#define rev(i,hi,lo) for(int i=(hi);i>=(lo);--i)
#define pb push_back
#define mp make_pair
#define sz(x) ((int)((x).size()))
#define out(x)  cout<<#x<<"="<<(x)<<"\n"
#define LL "%lld" //%I64d 
typedef long long ll;
typedef long long lint;
typedef long double ldouble;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef map<int, int> mii;
const int INF = 1 << 30;
const int MAX = 2000;
const lint MOD = 1000*1000*1000+7;	
inline lint Abs(lint x) {return x > 0 ? x : -x; }

int N, K;
int A[1000];

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	//freopen("out2", "w", stdout);
#endif	
	cin >> N >> K;
	for (int i = 0; i < N; ++i) {
		cin >> A[i];
	}
	sort(A, A + N);
	int x = A[N - 1] + K;
	for (int k = 0; k < K; ++k) {
		A[0]++;
		sort(A, A + N);
	}
	int y = A[N - 1];
	cout << y << " " << x << endl;
	return 0;
}
