#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(int argc, char** argv) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    if (argc == 2 && atoi(argv[1]) == 123456789)
        freopen("d:\\code\\cpp\\stdin", "r", stdin);

    int n;
    cin >> n;
    int sol = 0, a, b, now = 0;
    for(int i=0; i<n; i++){
       cin >> a >> b;
       now += (b-a);
       sol = max(sol, now);
    }
    cout << sol << endl;
    return 0;
}