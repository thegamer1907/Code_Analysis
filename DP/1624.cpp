#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
unsigned long long ULL;

const int inf = 1000111222;
const int N = 100007;

int main(){

        ios_base::sync_with_stdio(0);
        cin.tie(0); cout.tie(0);

        string str; cin >> str;
        int n = str.length();
        for (int i = 0; i + 1 < n; i++) {
                if (str[i] == 'A' && str[i + 1] == 'B') {
                        for (int j = i + 2; j + 1 < n; j++) {
                                if (str[j] == 'B' && str[j + 1] == 'A') {
                                        cout << "YES\n";
                                        exit(0);
                                }
                        }
                        break;
                }
        }
        for (int i = 0; i + 1 < n; i++) {
                if (str[i] == 'B' && str[i + 1] == 'A') {
                        for (int j = i + 2; j + 1 < n; j++) {
                                if (str[j] == 'A' && str[j + 1] == 'B') {
                                        cout << "YES\n";
                                        exit(0);
                                }
                        }
                        break;
                }
        }
        cout << "NO\n";
        return 0;
}

