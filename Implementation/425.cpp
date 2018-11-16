#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <math.h>
using namespace std;


int main()
{
    int n, k; cin >> n >> k;
    vector<int> mas(n);
    map<int, int> res;

    for (int i = 0; i < n; i++) {
        cin >> mas[i];
        res[mas[i]]++;
    }

    sort(mas.begin(), mas.end(), std::greater<int>());

    int i = mas[k - 1];
    int count = 0;

    for (; i <= mas[0]; i++) {
        if (i > 0) count += res[i];
    }

    cout << count;
    return 0;
}
