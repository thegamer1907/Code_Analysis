#include <bits/stdc++.h>

using namespace std;

int main(){

    string s; cin >> s;
    int n; cin >> n;
    vector<string> S(n);
    bool ok = false;
    for(int i = 0;i<n;i++){
    	cin >> S[i];
    	for(int j = 0;j<S[i].size()-1;j++)
    	if(S[i][j] == s[0] && S[i][j+1] == s[1])
    		ok = true;
    	for(int j = 0;j<=i;j++)
    	if((S[i].back() == s[0] && S[j][0] == s[1]) || (S[j].back() == s[0] && S[i][0] == s[1]))
    		ok = true;

    }
    cout << (ok? "YES" : "NO") << endl;

    return 0;
}
