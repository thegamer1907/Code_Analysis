#include <bits/stdc++.h>

using namespace std;

#define sc(a) scanf("%d",&a)
#define sc2(a,b) scanf("%d%d",&a,&b)
#define sc3(a,b,c) scanf("%d%d%d",&a,&b,&c)
#define pri(x) printf("%d\n",x)
#define prie(x) printf("%d ",x)
#define prif() printf("\n")
#define sz(x) (int)((x).size())
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define BUFF ios::sync_with_stdio(false)

typedef long long int ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ii> vii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() {
	int n, t; sc2(n, t);
	int v[n];
	for (int i = 0; i < n; i++) {
		char c; scanf(" %c", &c);
		v[i] = c == 'B';
	}
	for (int i = 0; i < t; i++)
		for (int j = 0; j < n-1; j++)
			if (v[j] and !v[j+1]) {
				swap(v[j], v[j+1]);
				j++;
			}

	for (int i = 0; i < n; i++)
		printf("%c", v[i] ? 'B' : 'G');
	prif();
	return 0;
}

// 1539805652349
