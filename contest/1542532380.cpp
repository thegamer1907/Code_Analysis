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
	int hh, mm, ss;
	sd(hh), sd(mm), sd(ss);
	hh *= 5;
	if (hh == 60) hh = 0;

	int t1, t2;
	sd(t1), sd(t2);
	t1 *= 5;
	t2 *= 5;
	if (t1 == 60) t1 = 0;
	if (t2 == 60) t2 = 0;
	
	int i = min(t1, t2);
	while (true) {
		if (i == max(t1, t2)) {
			ps("YES");
			return 0;
		}
		if (hh == i || mm == i || ss == i) {
			break;
		}
		i++;
		if (i == 60) i = 0;
	}
	
	i = max(t1, t2);
	while (true) {
		if (i == min(t1, t2)) {
			ps("YES");
			return 0;
		}
		if (hh == i || mm == i || ss == i) {
			break;
		}
		i++;
		if (i == 60) i = 0;
	}

	ps("NO");

}