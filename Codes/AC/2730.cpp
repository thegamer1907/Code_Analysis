#include <bits/stdc++.h>
using namespace std;
typedef vector <int> vi;

vi z_function(string &s) {
    vi z(s.size(), 0);

    for(int i=1,l=0,r=0;i<s.size();i++) {
        if (i <= r) 
            z[i] = min(r - i + 1, z[i - l]);
        
        while (i + z[i] < s.size() && s[z[i]] == s[i + z[i]])
            z[i]++;

        if(i + z[i] - 1 > r)
            l = i, r = i + z[i] - 1;
    }

    return z;
}

string S;

int main() {
    cin >> S;

    vi Z = z_function(S), CT;
    CT.assign(S.size(), 0);

    for (int i = 0; i < S.size(); i++) 
        CT[Z[i]]++;

    for (int i = 1; i < S.size(); i++)
        CT[i] += CT[i - 1];
    
    for (int i = 0; i < S.size(); i++) {
        if(i + Z[i] == S.size() && (CT[S.size() - 1] - CT[Z[i] - 1]) > 1) {
            cout << S.substr(i, Z[i]) << endl;
            return 0;
        }
    }

    cout << "Just a legend" << endl;
}