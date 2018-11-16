#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <bitset>
#include <string>
#include <algorithm>
#include <cmath>
#include <cassert>
#include <ctime>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n, a, b;
    cin >> n >> a >> b;

    a--;
    b--;

    int st = 0;

    while ((a / (1 << st)) != (b / (1 << st))){
        st++;
    }

    if ((1 << st) == n){
        cout << "Final!" << endl;
    } else {
        cout << st << endl;
    }

    return 0;
}
