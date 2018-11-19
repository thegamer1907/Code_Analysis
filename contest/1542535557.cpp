#include <bits/stdc++.h>
using namespace std;

ifstream fin("input.txt");
ofstream fout("output.txt");

inline void boostIO() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}
typedef long int l;
typedef long long int ll;

#define fori(n) for(int i = 0; i < (n); ++i)
#define forj(n) for(int j = 0; j < (n); ++j)
#define fork(n) for(int k = 0; k < (n); ++k)

int main() {
    boostIO();
    int h, m, s, t1, t2; cin >> h >> m >> s >> t1 >> t2;
    //vse v secundi
    vector<pair<int, bool> > A(5);
    A[0].first = (h * 3600  + m * 60 + s) % 43200;
    A[1].first = (m * 720 + s * 12) % 43200;
    A[2].first = (s * 720) % 43200;
    A[3].first = (t1 * 3600) % 43200;
    A[4].first = (t2 * 3600) % 43200;
    A[3].second = 1;
    A[4].second = 1;
/*
    fori(5)
        cout << A[i].first << "(" << A[i].second << ") ";
    cout << endl;
*/
    sort(A.begin(), A.end());
    A.resize(6);
    A[5] = A[0];



    for(int i = 0; i < 5; ++i) {
        if (A[i].second == 1 && A[i + 1].second == 1) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}
