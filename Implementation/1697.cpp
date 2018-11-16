#include <bits/stdc++.h>
#define nl "\n"
#define llong long long
#define pb push_back
#define F first
#define S second

#define sz(a) int((a).size())
#define all(a) (a).begin(),(a).end()

using namespace std;

const long long MXN = 1e5 + 7;
const long long MNN = 1e3 + 7;
const long long MAX = 1e8 + 7;
const long long MIN = 1e-8 - 7;
const long long N = 1e4 + 7;

using namespace std;

int main(){
    string s;
    cin >> s;
    for( long long i = 0; i < s.size();i ++){
        if(s[i] == s[i + 1] && s[i] == s[i + 2] && s[i] == s[i + 3] && s[i] == s[i + 4] && s[i] == s[i + 5] && s[i] == s[i + 6]){
            cout << "YES";
            return 0;
        }
    }
        cout << "NO";
return 0;
}