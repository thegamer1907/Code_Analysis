#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int n, k;
int f[16];

int main(){
    ios::sync_with_stdio(false);
    
    cin >> n >> k;
    for(int i=0; i<n; i++){
        int z = 0;
        for(int j=0; j<k; j++){
            int x; cin >> x;
            z += x*(1<<j);
        }
        f[z]++;
    }
    if(f[0]) {cout << "YES\n"; return 0;}
    for(int i=0; i<16; i++) for(int j=i+1; j<16; j++) if(f[i] && f[j]){
        if((i&j) == 0){
            cout << "YES\n"; return 0;
        }
    }
    
    cout << "NO\n";
    return 0;
}
