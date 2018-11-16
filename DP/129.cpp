#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {

    int a;
    int c;
    cin >> a;
    int b[150];

    for(int k = 0; k < a; k++) {
        cin >> b[k];
    }

    cin >> c;

    int g[150];

    for(int l = 0; l < c; l++) {
        cin >> g[l];
    }

    sort(b,b + a);
    sort(g,g + c);
    int i = 0;
    int j = 0;
    int pairs = 0;

    while(i <= a && j <= c) {
        if(abs(b[i] - g[j]) <= 1) {
            pairs++;
            i++;
            j++;
        }
        else {
            b[i] < g[j] ? i++ : j++;
        }
    }

    cout << pairs;
}
