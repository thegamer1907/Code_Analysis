#include <iostream>
//#include <fstream>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

//ifstream cin("input.txt");
//ofstream cout("output.txt");

main()
{
    long long n, m, k, res = 0, i, kek;
    cin >> n >> m >> k;
    long long A[m];
    for (i = 0; i < m; ++i)
        cin >> A[i];
    long long l = 1, r = k, w = 0, tmp;
    while (w < m) {
        if (A[w] > r) {
            tmp = r;
            r += k;
            l = tmp + 1;
        }
        else {
            res += 1;
            kek = 0;
            while (w < m && A[w] <= r) {
                //cout << A[w] << " ";
                ++w;
                ++kek;
            }
            //cout << endl;
            r += kek;
        }
    }
    cout << res;
}