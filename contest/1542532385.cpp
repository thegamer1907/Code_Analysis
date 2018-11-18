#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>

#define sd(n) scanf("%d",&n) == 0
#define sl(n) scanf("%I64d",&n) == 0
#define ss(n) scanf("%s",n) == 0
#define sc(n) scanf(" %c",&n) == 0

#define pd(x) printf("%d", x)
#define ps(x) printf("%s", x)
#define pl(x) printf("%I64d", x)

#define rep(i, begin, end) for (decltype(begin) i = begin; i < end; i++)
#define revrep(i, begin, end) for (decltype(begin) i = end - 1; i >= begin; i--)
#define all(a) a.begin(), a.end()


using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long> vl;
typedef pair<int, int> pii;


int main() {
	int n;
	char a, b;
	sc(a), sc(b);
	sd(n);
	bool f = 0, s = 0;

	rep(i, 0, n) {
		char aa, bb;
		sc(aa), sc(bb);

		if (aa == b) {
			s = 1;
		}
		if (bb == a) {
			f = 1;
		}
		if ((s && f) || (aa == a && bb == b)) {
			ps("YES");
			return 0;
		}
	}

	ps("NO");
}