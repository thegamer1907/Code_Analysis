#include <bits/stdc++.h>
using namespace std;
const int maxn = 2e5 + 29;
typedef pair<int ,int > P;
typedef long long ll;
string a[1000];
int main(void){
    string str;
    int n;
    cin >> str;
    cin >> n;
    for(int i = 1; i <= n; i ++) cin >> a[i];
    string t;
    for(int i = 1; i <= n; i ++) for(int j = 1; j <= n; j ++){
        t = a[i] + a[j];
        if(t.find(str) != string::npos){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}