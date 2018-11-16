#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
 
 
 
int main() {
 
    int a1, a2, a3;
    int b1, b2, b3;
    int n;
    cin >> n;
    a1 = a2 = a3 = 0;
    for(int i = 0; i < n; ++i) {
        cin >> b1 >> b2 >> b3;
        a1 += b1;
        a2 += b2;
        a3 += b3;
    }
    if(a1 == 0 && a2 == 0 && a3 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
