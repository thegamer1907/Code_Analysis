#include <cstdio>
#include <iostream>
using namespace std;

int N;
string s, w[110];
bool DP[110];

int main() {
    cin >> s >> N;

    s = "xx" + s + "x";

    for (int i=0;i<N;i++) 
        cin >> w[i];

    DP[0] = DP[1] = true;
    
    for(int i=2;i<s.size();i++) {
        for(int k=0;k<N;k++) {
            char a = w[k][0], b = w[k][1];
            if((b == s[i] || i == s.size()-1) && (a == s[i-1] || i < 3) && DP[i-2])
                DP[i] = true;
        }
    }

    bool res = DP[s.size()-1] || DP[s.size()-2];

    cout << (res ? "YES" : "NO") << "\n";

    return 0;
}