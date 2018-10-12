#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
#include <algorithm>
#include <stdlib.h>

using namespace std;

int compare (const void * a, const void * b) {
    return ( *(unsigned int*)a - *(unsigned int*)b );
}

int main() {
    int n , m , c;
    string poland[1000];
    string enemy[1000];
    cin >> n >> m;
    c = 0;
    for (int a = 0; a < n; ++a){
        cin >> poland[a] ;
    }
    for (int a = 0; a < m; ++a){
        cin >> enemy[a] ;
    }
    for (int a = 0; a < m; ++a){
        for (int b = 0; b < n; ++b){
            if (poland[b] == enemy[a]){
                ++c;
            }
        }
    }
    if (c % 2 == 0){
        if (n > m){
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    else {
        if (m > n){
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
        }
    }
}