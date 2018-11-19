#include "bits/stdc++.h"
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
using namespace std;
int main(){
	double h, m, s, t1, t2;
	cin >> h >> m >> s >> t1 >> t2;
	if(t1 > t2) swap(t1, t2);
	double hours = h + m / 60 + s / 3600;
	double minutes = m  + s / 60;
	double seconds = s;
	bool hours_move = t1 < hours && hours < t2;
	bool minutes_move = t1 * 60 < minutes * 12 && minutes * 12 < t2 * 60;
	bool seconds_move = t1 * 60 < seconds * 12 && seconds * 12 < t2 * 60;
	if(hours_move == minutes_move && seconds_move == hours_move) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
