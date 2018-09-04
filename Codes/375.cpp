#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define ll long long
#define mp make_pair
#define f first
#define s second
#define pii pair < int, int >
#define pll pair < ll, ll >
#define all(s) s.begin(), s.end()
#define sz(s) (int) s.size()
#define forit(it, s) for(__typeof(s.begin()) it = s.begin(); it != s.end(); it++)
#define vi vector < int >

const int inf = (int)1e9;
const int mod = (int) 1e9 + 7;

bool isOk(int x){
    int res = 0;
    while (x > 0){
        res += x%10;
        x /= 10;
    }
    return res == 10;
}

int main () {
    int k; scanf("%d", &k);
    int t = 0;
    for (int i=1;i<10810000;i++){
        if (isOk(i)) {
            t++;
            if (t == k){
                cout <<i<<endl;
                return 0;
            }
        }
    }

    return 0;
}
