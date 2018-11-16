/* In the name of Allah */
#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second
#define pb push_back
#define mp make_pair
#define Size(x) ((int)(x).size())
#define Precision(i) cout << fixed << setprecision(i)

typedef long long ll;
typedef long double ld;
typedef pair <int, int> pii;

int main() {
	ios_base :: sync_with_stdio(false), cin.tie(0), cout.tie(0);

	int n, k;
	cin >> n >> k;

	int a[n];
	for(int i = 0; i < n; i++)	cin >> a[i];
	int b[k];
	for(int i = 0; i < k; i++)	cin >> b[i];

	sort(b, b + k);
	for(int i = 0; i < n; i++)
		if(a[i] == 0)	a[i] = b[--k];

	bool big = 1;
	for(int i = 0; i < n - 1 && big; i++)
		if(a[i] > a[i + 1])	big = 0;

	if(big)	cout << "No\n";
	else	cout << "Yes\n";

	return 0;
}
