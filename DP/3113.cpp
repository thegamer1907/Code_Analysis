#include <iostream>
#include <vector>

#define show(x) cerr << #x << " = " << x << endl;

using namespace std;
using ll = long long;

template <typename T>
ostream& operator<<(ostream& os, const vector<T>& v)
{
    os << "[";
    for (const auto& e : v) {
        os << e << ",";
    }
    os << "]" << endl;
    return os;
}

int main()
{
    int h, w;
    cin >> h >> w;
    vector<vector<char>> field(h, vector<char>(w));
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> field[i][j];
        }
    }

    vector<vector<ll>> tate(h, vector<ll>(w, 0LL));
    vector<vector<ll>> yoko(h, vector<ll>(w, 0LL));
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w - 1; j++) {
            if (field[i][j] == '.' and field[i][j + 1] == '.') {
                yoko[i][j + 1] += 1;
            }
        }
    }
    for (int i = 0; i < h - 1; i++) {
        for (int j = 0; j < w; j++) {
            if (field[i][j] == '.' and field[i + 1][j] == '.') {
                tate[i + 1][j] += 1;
            }
        }
    }

    for (int i = 0; i < h; i++) {
        for (int j = 1; j < w; j++) {
            tate[i][j] += tate[i][j - 1];
            yoko[i][j] += yoko[i][j - 1];
        }
    }
    for (int j = 0; j < w; j++) {
        for (int i = 1; i < h; i++) {
            tate[i][j] += tate[i - 1][j];
            yoko[i][j] += yoko[i - 1][j];
        }
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int r1, c1, r2, c2;
        cin >> r1 >> c1 >> r2 >> c2;
        r1--, c1--, r2--, c2--;
        const ll Y = yoko[r2][c2] - yoko[r2][c1] - (r1 > 0 ? yoko[r1 - 1][c2] - yoko[r1 - 1][c1] : 0);
        const ll T = tate[r2][c2] - tate[r1][c2] - (c1 > 0 ? tate[r2][c1 - 1] - tate[r1][c1 - 1] : 0);
        cout << Y + T << endl;
    }


    return 0;
}
