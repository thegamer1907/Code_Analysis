#include <bits/stdc++.h>

using namespace std;

//TATARSTAN - SUPERGOOD

const int INF = (1 << 31) - 1;

typedef long long int64;

int main()
{
    #ifdef HOME
        freopen("input.txt", "rt", stdin);
    #endif // HOME
    int n, a, b;
    cin >> n >> a >> b;
    int kek = 1;
    int id = 0;
    for (int i = 0; i < 25; i++){
        int a1 = (a + kek - 1) / kek;
        int b1 = (b + kek - 1) / kek;
        if (a1 == b1){
            id = i;
            break;
        }
        kek *= 2;
    }
    int lol = (1 << id);
    if (lol == n){
        cout << "Final!";
    }
    else{
        cout << id;
    }
    return 0;
}
