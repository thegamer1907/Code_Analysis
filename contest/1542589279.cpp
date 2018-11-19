#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int occ[30];

int main(){
    ios::sync_with_stdio(false);
    
    int h, m, s, t1, t2;
    cin >> h >> m >> s >> t1 >> t2;
    
    occ[s/5] = occ[s/5+12] = 1;
    occ[m/5] = occ[m/5 + 12] = 1;
    occ[h] = occ[h+12] = 1;
    
    bool b = false;
    for(int i=0; i<24; i++){
        if(i == t1 || i == t2 || i == t1+12 || i == t2+12){
            if(b){
                cout << "YES\n"; return 0;
            }
            b = true;
        }
        if(occ[i]) b = false;
    }
    cout << "NO\n";
    return 0;
}
