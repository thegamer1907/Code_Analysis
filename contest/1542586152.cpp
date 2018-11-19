#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <set>
#include <string>
#include <cassert>
#include <memory.h>
using namespace std;
typedef long long ll;

const int lcm = 1200;
const int mod = 360*lcm;

vector<int> angle;
int main () {
    int H, M, S, T1, T2;
    cin >> H >> M >> S >> T1 >> T2;
    angle = vector<int> (mod+1, 0);
    
    T1 = T1*30*lcm%mod;
    T2 = T2*30*lcm%mod;
    
    angle[(S*6*lcm)%mod] = 1;
    angle[(M*6*lcm+(S>0))%mod] = 1;
    angle[(H*30*lcm+(M>0 || S>0))%mod] = 1;
    
    for(int i=1;i<mod;i++) {
        int t = (T1+i)%mod;
        if(angle[t]) break;
        if(t == T2) {
            cout << "YES";
            return 0;
        }
    }
    for(int i=1;i<mod;i++) {
        int t = (mod+T1-i)%mod;
        if(angle[t]) break;
        if(t == T2) {
            cout << "YES";
            return 0;
        }
    }
    
    cout << "NO";
    
    return 0;
}
