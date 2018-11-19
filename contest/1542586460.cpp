#include <bits/stdc++.h>
#define pb push_back
#define pp pop_back
#define mp make_pair
#define f first
#define s second
#define kz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define FILE ""
#define fr freopen(FILE".in", "r", stdin); freopen(FILE".out", "w", stdout);
#define y1 asafas
#define x0 afasfa
#define y0 safasf
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int ui;
typedef vector <int> vi;
typedef pair <int, int> pii;

const int N = 3e5 + 111, inf = 1e9, mod = 1e9 + 7;
const ll linf = 1e18;

int h, m, s;
double t1, t2, a[N];

int main(){
	cin >> h >> m >> s >> t1 >> t2;
	h %= 12;
	if(t1 == 12.0)
	t1 -= 12;
	if(t2 == 12.0)
		t2 -= 12;
	a[1] = h * 30.0 + m * 30.0 / 60 + s * 30.0 / 3600;
	a[2] = m * 6.0 + s * 6.0 / 60.0;
	a[3] = s * 6.0;
	t1 = t1 * 30.0;
	t2 = t2 * 30.0;
	sort(a + 1, a + 4);
	for(int i = 1; i < 3; ++i)
		if(a[i] < t1 && a[i] < t2 && a[i + 1] > t1 && a[i + 1] > t2){
			cout << "YES";
			return 0;
		}
	if(a[1] > t1)
		t1 += 360.0;
	if(a[1] > t2)
		t2 += 360.0;
	a[1] += 360.0;
	if(a[3] < t1 && a[3] < t2 && a[1] > t1 && a[1] > t2){
		cout << "YES";
		return 0;
	}
	cout << "NO";
	return 0;
}