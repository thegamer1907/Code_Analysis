#include <bits/stdc++.h>

using namespace std;
const int N = 1e5;
long long n, m, k;
long long p[N];
int main()
{
    cin >> n >> m >> k;
    for (int i = 0; i < m; i++)
        cin >> p[i];
    int cnt = 0;
    int ind = 0;
    int x = 0;
    while (ind < m){
        int numl = ((p[ind] - 1 - x) / k) * k + 1;
        int numr = numl + k - 1;
        int tmp = 0;
        while (ind < m && numl <= p[ind] - x && p[ind] - x <= numr){
            ind++;
            tmp++;
        }
        x += tmp;
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}