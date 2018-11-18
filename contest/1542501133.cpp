#include <bits/stdc++.h>

#define ll  long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define INF (long long) 1e30
#define pii pair<ll ,ll >
using namespace std;


int main() {
//    ifstream cin("input.txt");
//    ofstream cout("output.txt");
//    fast;
    int n;
    string a;
    cin >> a >> n;
    string ar[n];
    for (int i = 0; i < n; i++) {
        cin >> ar[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            string me = ar[i] + ar[j];
            for (int k = 0; k < 3; k++) {
                if (me.substr(k, 2) == a)
                {
                    cout << "yes";
                    return 0;
                }
            }
        }
    }
    cout<<"no";
}

