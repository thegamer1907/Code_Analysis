#include<bits/stdc++.h>



using namespace std;

int n, k, a[111111];
bool u[111111];

main(){
    cin>> n >> k;
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= k; ++j){
            int x;
            cin >> x;
            a[i] += (x << (k - j));
        }
        u[a[i]]= true;
        //cout << a[i] << "\n";
    }

    int xr = 1;

    for(int i = 2; i <= k; ++i)
        {
            xr <<= 1;
            xr++;
        }

   // cout << xr << "\n";

    for(int i = 1; i <= n; ++i){
        int s = a[i] ^ xr;
        for(int j = s; j >= 0; --j){
            if(u[j]){
                int ii = __builtin_popcount(a[i]);
                int jj = __builtin_popcount(j);
                int cc = j + a[i];
                if(__builtin_popcount(cc) == ii + jj){
                    cout << "YES";
                    return 0;
                }
            }
        }
    }
    cout << "NO";
}
