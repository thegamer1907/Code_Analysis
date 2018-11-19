#include <iostream>
#include <fstream>
#include <algorithm>
#include <cmath>
#include <climits>
#include <vector>

using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;

const int INF = 2e9+5;

/*
    filippos
    Contest : 868
    Task : A
*/

int main(){
    cin.tie(0);
    cin.sync_with_stdio(0);
    int h, m, s, t1, t2;
    cin >> h >> m >> s >> t1 >> t2;
    vector<double> angles(3);
    angles[0] = h + m/60.0 + s/3600.0;
    angles[1] = m/60.0 * 12 + s/3600.0;
    angles[2] = s/60.0 * 12;
    sort(angles.begin(), angles.end());
    // for(double d : angles)
    // 	cout << d << ' ';
    // cout << endl;
    for(int i = 0; i < 2; i++){
	    if(angles[i] < t1 && angles[i] < t2 && angles[i + 1] > t1 && angles[i + 1] > t2){
	    	cout << "YES";
	    	return 0;
	    }
    }
    if(t1 < angles[0] || t1 > angles[2])
        if(t2 < angles[0] || t2 > angles[2]){
            cout << "YES";
            return 0;
        }
    cout << "NO";
    return 0;
}