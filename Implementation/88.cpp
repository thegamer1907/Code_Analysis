#include <bits/stdc++.h>

#define ll long long
#define ull long long
#define ld long double

#define f first
#define s second
#define pii pair <int, int>

#define pb push_back

using namespace std;

const int MXN = 1e6 + 228;
const int INF = 1e9 + 7;
const int mod = 1e9 + 7;
const double EPS = 1e-10;

int n, a, b;
int sz = 0;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif // ONLINE_JUDGE
    cin >> n >> a >> b;

    while(n != 0){
        n /= 2;
        sz ++;
    }
    sz --;

    a --;
    b --;

    for(int i = 1; i <= sz; i++){
        if(a / 2 == b / 2){
            if(i == sz){
                cout << "Final!";
                return 0;
            }
            cout << i;
            return 0;
        }
        a /= 2;
        b /= 2;
    }
    return 0;
}
