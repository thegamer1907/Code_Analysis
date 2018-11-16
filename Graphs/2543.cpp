#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

vector <int> v[10004];
int c[10004] , res;

void dfs(int x , int ancestorColor) {
        if (ancestorColor != c[x]) {
                ++res;
                ancestorColor = c[x];
        }
        int sz = v[x].size();
        for (int i = 0 ; i < sz ; ++i) {
                dfs(v[x][i] , ancestorColor);
        }
}

int main() {
        int n;
        scanf("%d" , &n);
        for (int i = 1 ; i < n ; ++i) {
                int x;
                scanf("%d" , &x);
                v[x-1].push_back(i);
        }
        for (int i = 0 ; i < n ; ++i) {
                scanf("%d" , &c[i]);
        }
        dfs(0 , 0);
        printf("%d" , res);
        return 0;
}
