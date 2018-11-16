#include <iostream>
#include <cstdio>
#include <string>
#include <vector>

using namespace std;

string str;
int m, sum, l, r;
vector<int> sum_tbl;

int main() {
    cin >> str >> m;
    sum_tbl.push_back(0);
    for (int i = 1; i < str.size(); i++) {
        if (str[i] == str[i-1]) sum++;
        sum_tbl.push_back(sum);
    }
    for (int i = 0; i < m; i++) {
        scanf("%d %d", &l, &r);
        printf("%d\n", sum_tbl[r-1]-sum_tbl[l-1]);
    }
}