#include <bits/stdc++.h>

#define mp make_pair
#define pb push_back
#define se second
#define fi first

typedef long long ll;
using namespace std;
const int NUM = 4e5 + 5;
const int mod = 1e9 + 7;
ll INF = 1e9;
pair <int ,int> pinf = {INF, INF};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n, a, b;
    cin >> n >> a >> b;
    vector <int> bita;
    vector <int> bitb;
    a--;
    b--;
    int len = 0;
    while (n /= 2)
        len++;
    for (int i = 0; i < len; i++){
        bita.pb(a % 2);
        bitb.pb(b % 2);
        a /= 2;
        b /= 2;
    }
    reverse(bita.begin(), bita.end());
    reverse(bitb.begin(), bitb.end());
    for (int i = 0; i < len; i++)
        if (bita[i] != bitb[i]){
            if (i == 0)
                cout << "Final!";
            else
                cout << len - i;
            break;
        }
    return 0;
}


