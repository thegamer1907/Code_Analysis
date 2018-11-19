#include <bits/stdc++.h>
#define OO 1e9
#define ll long long
using namespace std;

int main()
{
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    int n, k;
    cin >> n >> k;
    set<int> mp;
    int z;
    for(int i = 0;i < n;i++){
        int x = 0;

        for(int j = 0;j < k;j++){
            x <<= 1;
            cin >> z;
            x |= z;
        }

        mp.insert(x);
    }

    for(int i = 0;i < (1 << k);i++){
        for(int j = 0;j < (1 << k);j++){
            if((i & j) == 0 && mp.count(i) && mp.count(j)){
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
    return 0;
}
