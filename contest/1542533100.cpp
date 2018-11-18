#include <bits/stdc++.h>
#define pb push_back
typedef long double ld;
typedef long long ll;

using namespace std;


int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    string p; cin >> p;
    int n; cin >> n;
    vector<string> x(n);
    for(int i = 0; i < n; i++){
    	cin >> x[i];
    }
    for(int i = 0; i < n; i++){
    	for(int j = 0; j < n; j++){
    		string z = x[i] + x[j];
    		if(z.find(p) != z.npos){
    			cout << "YES\n"; return 0;
    		}
    	}
    }
    cout << "NO\n";

    return 0;
}