#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;
vector<int>a[11][11];
const int MAX = 1e4;
int n;
void deal(int digit) {
    for(int i = 1; i <= 10; ++i) {//sum
        for(int j = 0; j <= 10 - i; ++j) {//the number to add
            n = a[digit - 1][i].size();
            for(int k = 0; k < n; ++k) {
                a[digit][i + j].push_back(a[digit - 1][i][k] * 10 + j);
            }
        }
    }
}
vector<int>ans;
int main() {
    for(int i = 0; i <= 9; ++i)
        a[1][i].push_back(i);
    for(int i = 2; i <= 8; ++i) deal(i);

    int sum = 0;
    for(int i = 2; i <= 8; ++i) {
        n = a[i][10].size();
        for(int j = 0; j < n; ++j)
            ans.push_back(a[i][10][j]);
    }
    sort(ans.begin(), ans.end());

    scanf("%d", &n);
    printf("%d\n", ans[n - 1]);
    return 0;
}
