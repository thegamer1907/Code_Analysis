#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

string p;
string s[200];

int main(){
    ios::sync_with_stdio(false);
    
    cin >> p;
    int n; cin >> n;
    for(int i=0; i<n; i++) cin >> s[i];
    
    for(int i=0; i<n; i++) if(s[i] == p){
        cout << "YES\n";
        return 0;
    }
    for(int i=0; i<n; i++) for(int j=0; j<n; j++){
        if(s[i][1] == p[0] && s[j][0] == p[1]){
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
    return 0;
}
