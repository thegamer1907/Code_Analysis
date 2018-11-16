#include <iostream>
#include <string>

using namespace std;

string s;
int m, p[100002];

int main() {
    cin >> s;
    for(int i = 1; i < int(s.size()); i++) {
        p[i] = p[i-1];
        if(s[i] == s[i-1]) p[i]++;
        //cout << p[i] << endl;
    }
    cin >> m;
    for(int i = 1; i <= m; i++) {
        int a, b; cin >> a >> b;
        cout << p[b-1] - p[a-1] << endl;
    }
}