#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define ll long long int
#define vi vector<int>
#define vii vector< vector<int> >
#define PI 3.1415926535897932384626433832795

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int h,m,s,t1,t2;
	cin >> h >> m >> s >> t1 >> t2;
	int currtimes = (h%12)*3600+m*60+s;
	int parts = 3600*12;
	int timeh = currtimes%parts;
	parts/= 12;
	int timem = currtimes%parts*12;
	parts/= 60;
	int times = currtimes%parts*12*60;
	int t1t = (t1%12)*3600;
	int t2t = (t2%12)*3600;
	bool isgood = false;
	int ind = t1t;
	while(true) {
		if(ind == 3600*12) {
			ind = 0;
		}
		if(ind == timeh || ind == timem || ind == times) {
			break;
		}
		if(ind == t2t) {
			isgood = true;
			break;
		}
		ind++;
	}
	ind = t1t;
	//cout << ind << " " << timeh << " " << timem << " " << times;
	if(!isgood) {
		while(true) {
			if(ind == -1) {
				ind = 3600*12-1;
			}
			if(ind == timeh || ind == timem || ind == times) {
				break;
			}
			if(ind == t2t) {
				isgood = true;
				break;
			}
			ind--;
		}
	}
	cout << (isgood ? "YES" : "NO");
	return 0;
}


