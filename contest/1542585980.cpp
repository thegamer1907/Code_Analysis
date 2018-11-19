/*input
3 47 0 4 9
*/
#include <bits/stdc++.h>

using namespace std;

#define fr(i,a,b) for(int (i) = (a); (i) < (b); ++(i))
#define rp(i,n) fr(i,0,n)
#define fi first
#define se second
#define all(v) (v).begin(), (v).end()
#define pb push_back
#define mt make_tuple
#define mp make_pair
#define sz(a) (int)(a.size())
#define IOS ios::sync_with_stdio(0);cin.tie(0);
typedef unsigned long long ull;
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;

const int inf = 0x3f3f3f3f;
const int neginf = 0xc0c0c0c0;

int main(){
	int h, m, s, t1, t2;
	cin >> h >> m >> s >> t1 >> t2;
	// casos que consigo todos os ponteiros estao no mesmo "semi-circulo"
	double degS = 6 * s;
	double degM = 6*m + degS/60.0;
	double degH = 30*h + degM/60.0;

	double d1 = t1 * 30;
	double d2 = t2 * 30;
	int countEntre = 0;
	if(d1 > d2){
		
		if(degS >= d2 && degS <= d1) countEntre++;
		if(degM >= d2 && degM <= d1) countEntre++;
		if(degH >= d2 && degH <= d1) countEntre++;
	}
	else{
		swap(d1, d2);
		if(degS >= d2 && degS <= d1) countEntre++;
		if(degM >= d2 && degM <= d1) countEntre++;
		if(degH >= d2 && degH <= d1) countEntre++;
	}
	if(countEntre == 0 || countEntre == 3) cout << "YES" << endl;
	else cout << "NO" << endl;

	return 0;
}

