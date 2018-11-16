#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm>
#include <iostream>
#include <string>
#include <bitset>
#include <map>
#include <set>
#include <tuple>
#include <string.h>
#include <math.h>
#include <random>
#include <functional>
#include <assert.h>
#include <math.h>
#include <sstream>
#include <iterator>

using namespace std;

using i64 = long long int;
using ii = pair<int, int>;
using ii64 = pair<i64, i64>;

int main()
{
    int n;
    scanf("%d", &n);

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int maxv = *max_element(arr.begin(), arr.end());

    int ans = 0;

    for (int i = 0; i < n; i++)
        ans += maxv - arr[i];

    printf("%d\n", ans);
    return 0;
}