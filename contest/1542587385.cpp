#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    // std::ios::sync_with_stdio(false);
    // cin.tie(0);
    
    int n, k;
    scanf("%d %d",&n, &k);
    // cin >> n >> k;
    int len = 1<<k;
    bool can[len];
    for(int i = 0; i<len; i++){
        can[i] = false;
    }
    for(int i = 0; i<n; i++){
        int mask = 0;
        for(int j = 0; j<k; j++){
            int x;
            // cin >> x;
            scanf("%d",&x);
            mask += x*(1<<j);
        }
        can[mask] = true;
    }
    bool ans = can[0];
    for(int i = 1; i<len; i++){
        for(int j = i+1; j<len; j++){
            if(!can[i] || !can[j]){
                continue;
            }
            bool good = true;
            for(int z = 0; z<k; z++){
                if((i&(1<<z))!=0 && (j&(1<<z))!=0){
                    good = false;
                }
            }
            ans |= good;
        }
    }
    if(ans){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}