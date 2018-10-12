#include<iostream>
#include<vector>
#include<map>
#include<string>
#include<iomanip>
#include<utility>
#include<algorithm>
#include<cmath>
using namespace std;
typedef long long int ll;
#define sz(x) ((long long int)(x).size())
#define pb push_back
#define mp make_pair
int main () {
    int n, m;
    cin >> n >> m;
    vector <string> pols(n);
    vector <string> enem(m);
    for (int i = 0; i < n; i++)
        cin >> pols[i];
    for (int i = 0; i < m; i++)
        cin >> enem[i];
    int cnt = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (pols[i] == enem[j])
            cnt++;
    n += cnt%2;
    if (n <= m)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
    return 0;
}
