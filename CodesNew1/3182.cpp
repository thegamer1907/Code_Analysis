#include <bits/stdc++.h>

using namespace std;

//#define int long long

int n, k;
int a[300100];

main()
{
    ios_base::sync_with_stdio(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    cin >> n >> k;
    for(int i = 0; i < n; i++) cin >> a[i];
    int lo = 0, cur = 0;
    int an = 0, l = -1, r = -2;
    for(int i = 0; i < n; i++){
        while(cur + (a[i] == 0) > k){
            if(a[lo] == 0) cur--;
            lo++;
        }
        cur += (a[i] == 0);
        if(an < (i - lo + 1)){
            an = i - lo + 1;
            l = lo, r = i;
        }
    }
    for(int i = l; i <= r; i++){
        a[i] = 1;
    }
    cout << an << endl;
    for(int i = 0; i < n; i++) cout << a[i] << ' ';
}
