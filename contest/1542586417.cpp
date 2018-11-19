#include <bits/stdc++.h>
using namespace std;

int32_t main() {
    #ifdef DEBUG
        freopen("C:/Users/villebon/Desktop/input.txt","r",stdin);
	#else
		ios::sync_with_stdio(0);
		cin.tie(0);
		cout.tie(0);
    #endif
    int h, m, s, t1, t2;
    cin >> h >> m >> s >> t1 >> t2;
    double S=s*6.0;
    double M=m*6.0+0.1*s;
    double H=30.0*h+0.5*m+0.5*s/60;
    double P1 = t1*30.0, P2 = t2*30.0;
    vector<pair<double,int>> V;
    V.push_back(make_pair(P1,0));
    V.push_back(make_pair(P2,0));
    V.push_back(make_pair(S,1));
    V.push_back(make_pair(H,1));
    V.push_back(make_pair(M,1));
    sort(V.begin(), V.end());
    int pos=-1;
    for (int i=0; i<5; ++i) {
        if (V[i].second == 0) {
            pos=i;
            break;
        }
    }
    if (V[(pos+1)%5].second == 0 || V[(pos+4)%5].second == 0) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    return 0;
}
