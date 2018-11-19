#include <bits/stdc++.h>
using namespace std;

int main() {
    string wd;
    int N ;
    string wds[105];

    cin >> wd;
    cin >> N ;
    for(int i=0; i<N; i++)
        cin >> wds[i];

    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            string s = wds[i] + wds[j];
            for(int i=s.size()-1; i>0; i--) {
                if(wd[0]==s[i-1] && wd[1]==s[i]) {
                    cout << "YES" << endl;
                    return 0;
                }
            }
        }
    }

    cout << "NO" << endl;
}
