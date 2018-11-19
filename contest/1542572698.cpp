#include <bits/stdc++.h>
using namespace std;

int n, k, x, y;
set <int> s;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> k;
    while(n--){
        int y = 0;
        for(int i = 0 ; i < k && cin >> x ; i++)
            y = (y*2)+x;
        s.insert(y);
    }
    for(int i : s)
        for(int j : s)
            if((i&j) == 0) return cout << "YES" << endl, 0;
    cout << "NO" << endl;
    return 0;
}
