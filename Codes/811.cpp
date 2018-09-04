#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <queue>
#include <algorithm>
#include <cmath>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n, k;
    cin >> n >> k;
    vector <long long> a(51, 0);
    a[1] = 1;
    int q = 1;
    while (k%2 == 0){
        k = k/2;
        q++;
    }
    cout << q;
}