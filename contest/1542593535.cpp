#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <memory.h>
#include <assert.h>

#define fr first
#define sc second
#define mk make_pair
#define pb push_back
#define pf push_front
#define pii pair <int ,int>
#define all(s) s.begin (), s.end ()

using namespace std;

const int N = 1e5 + 2;

map <char, int> ss, es;

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();
    string s, z;
    cin >> s;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> z;
        ss[ z[0] ]++;
        es[ z[1] ]++;
        if (s == z)
        {
            puts("YES");
        return 0;
        }
    }
    if (es[ s[0] ] > 0 && ss[ s[1] ] > 0)
    {
        puts("YES");
        return 0;
    }

    puts("NO");
}
