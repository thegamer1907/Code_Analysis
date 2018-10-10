#include <bits/stdc++.h>

using namespace std;

#define REP(i, a, b) for (int i = (a), i##_end_ = (b); i < i##_end_; ++i)
#define debug(...) fprintf(stderr, __VA_ARGS__)
#define mp make_pair
#define x first
#define y second
#define pb push_back
#define SZ(x) (int((x).size()))
#define ALL(x) (x).begin(), (x).end()

typedef long long LL;




const int N = 300000;
const int INF = 0x3f3f3f3f;
int n, minx = INF, a[N];



int main()
{
	cin >> n;
	REP(i, 1, n + 1) {
		scanf("%d", &a[i]);
		minx = min(minx, a[i]);
	}
	REP(i, 1, n + 1) a[i] -= minx;
	int pos = 1 + minx % n, d = 0;
	
//	REP(i, 1, n + 1) cout << a[i] << ' ';
//	cout << endl << pos << endl;
	
	REP(i, pos, n + 1){
		if (a[i] - d <= 0){
			cout << i << endl;
			return 0;
		}
		d++;
	}
	REP(i, 1, pos){
		if (a[i] - d <= 0){
			cout << i << endl;
			return 0;
		}
		d++; 
	}

	return 0;
}
