
//#pragma GCC optimize("Ofast")

#include <fstream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <algorithm>
#include <stack>
#include <queue>
#include <deque>
#include <iomanip>
#include <math.h>

using namespace std;


#ifdef _DEBUG
ifstream cin("input.txt");
ofstream cout("output.txt");
#else
#include <iostream>
#endif

typedef long long ll;
typedef long double ld;
typedef pair <int, int> pii;
typedef pair <ll, ll> pll;

#define all(a) a.begin(), a.end()
#define i_o ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

int main(){
	int n;
	cin >> n;
	int x, y;
	cin >> x >> y, x--, y--;
	if (n == 2){
		cout << "Final!";
		return 0;
	}
	if (x / 2 == y / 2) {
		cout << 1;
		return 0;
	}
	for (int k = 1; n / (1 << (k - 1)) > 2; k++){
		if (x / 2 == y / 2){
			cout << k;
			return 0;
		}
		x /= 2, y /= 2;
	}
	cout << "Final!";
	return 0;
}