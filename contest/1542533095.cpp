#include <bits/stdc++.h>
#define pb push_back
typedef long double ld;
typedef long long ll;

using namespace std;


int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int h, m, s, t1, t2;
    cin >> h >> m >> s >> t1 >> t2;
    h = (10 * h + 1) % 120;
    m = 2 * m + 1;
    s = 2 * s + 1;
    t1 = 10 * t1;
    t2 = 10 * t2;
    vector<int> v = {h, m, s, t1, t2};
    sort(v.begin(), v.end());
    for(int i = 0; i < 5; i++){
    	if(v[i]%2==0 && v[(i + 1) % 5] % 2 == 0){
    		cout << "YES\n";
    		return 0;
    	}
    }
    cout << "NO\n";


    return 0;
}