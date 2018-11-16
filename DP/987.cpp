#include <iostream>
#include <iomanip>
#include <cassert>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <set>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <queue>
#include <ctime>
#include <numeric>

using namespace std;

int main() {
    
    //cout << "TEST: ";
    
    int n;
    cin >> n;
    
    int a[n];
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int z = 0, o = 0, max = -1, p1 = -1, p2 = -1;
    
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (a[j] == 0) {
                z++;
            }
            if (a[j] == 1) {
                o++;
            }
            if (z - o >= max) {
                max = z - o;
                p1 = i;
                p2 = j;
            }
        }
        z = 0;
        o = 0;
    }
    
    int c = 0;
    
    for (int i = 0; i < n; i++) {
        if (i >= p1 && i <= p2) {
            if (a[i] == 1) {
                a[i] = 0;
            }
            else {
                a[i] = 1;
            }
        }
        if (a[i] == 1) {
            c++;
        }
    }
    
    cout << c;
    
    return 0;
}
