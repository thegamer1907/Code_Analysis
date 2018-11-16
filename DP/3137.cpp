#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;

#define pb push_back
#define mp make_pair

int n, m, q;
string s[550];
int a[550][550];
int b[550][550];
int prefa[550][550];
int prefb[550][550];

int geta(int x0, int y0, int x1, int y1){
    if(x1 < x0) return 0;
    return prefa[x1][y1] - prefa[x0 - 1][y1] - prefa[x1][y0 - 1] + prefa[x0 - 1][y0 - 1];
}

int getb(int x0, int y0, int x1, int y1){
    if(y1 < y0) return 0;
    return prefb[x1][y1] - prefb[x0 - 1][y1] - prefb[x1][y0 - 1] + prefb[x0 - 1][y0 - 1];
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin >> n >> m;
    for(int i = 0; i < n; i++) cin >> s[i];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(i + 1 < n && s[i][j] == '.' && s[i + 1][j] == '.') a[i + 1][j + 1]++;
            if(j + 1 < m && s[i][j] == '.' && s[i][j + 1] == '.') b[i + 1][j + 1]++;
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            prefa[i][j] = a[i][j] + prefa[i - 1][j] + prefa[i][j - 1] - prefa[i - 1][j - 1];
            prefb[i][j] = b[i][j] + prefb[i - 1][j] + prefb[i][j - 1] - prefb[i - 1][j - 1];
        }
    }
    cin >> q;
    for(int i = 0; i < q; i++){
        int x, y, x1, y1;
        cin >> x >> y >> x1 >> y1;
        cout << geta(x, y, x1 - 1, y1) + getb(x, y, x1, y1 - 1) << endl;
    }
    return 0;
}
