#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <algorithm>
#include <cmath>
#include <set>
#include <map>

using namespace std;

const int N = 555555;
const int M = 1010101;

int a[M];

int getCnt(int a) {
    int sum = 0;
    while(a) {
        sum += a % 10;
        a /= 10;
    }
    return sum;
}

int main()
{
    ios_base::sync_with_stdio(0);

    int k;
    cin >> k;
    for(int i = 19; i <= 30000000; i += 9) {
        if (getCnt(i) == 10)
            --k;
        if (k == 0)
            return cout << i, 0;
    }
}
