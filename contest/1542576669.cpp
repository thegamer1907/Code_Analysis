/////////////////||
// vipsharmavip  ||
/////////////////||

#include "bits/stdc++.h"
#define ll long long
#define mod 1000000007

using namespace std;

int hsh[1 << 10];

int main(){
        cin.sync_with_stdio(false);
        int n, k;
        cin >> n >> k;
        int flag = 0;
        while(n--){
            int Or = 0;
            for(int i = 0 ; i < k ; ++i ){
             int x;
             cin >> x;
             Or += ( (1 << i) * x);
            }
             hsh[Or] = 1;
            for(int j = 0 ; j < (1 << k) ; ++j ){
                int valid = 1;
                for(int l = 0 ; l < k ; ++l){
                    int v1 = ((1 << l) & j);
                    int v2 = ((1 << l) & Or);
                    if(v1 && v2)
                        valid = 0;
                }
                if(valid){
                    if(hsh[j])
                        flag = 1;
                }
            }
           
        }

        if(flag) cout << "YES"; else
            cout << "NO";



   return 0;
}