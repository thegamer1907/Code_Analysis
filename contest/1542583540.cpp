#include <cstdio>
#include <set>
#include <utility>
#include <vector>

int n, m, a[4];
std::set<std::pair<std::pair<bool, bool>, std::pair<bool, bool>>> s;
std::vector<std::pair<std::pair<bool, bool>, std::pair<bool, bool>>> v;

int main() {
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < m; j++)
            scanf("%d", &a[j]);
        s.insert(std::make_pair(std::make_pair(a[0], a[1]), std::make_pair(a[2], a[3])));
    }
    for (auto p : s)
        v.push_back(p);
    for (auto i : v)
        for (auto j : v)
            if (!((i.first.first && j.first.first) || (i.first.second && j.first.second) || (i.second.first && j.second.first) || (i.second.second && j.second.second))) {
                puts("YES");
                return 0;
            }
    puts("NO");
    return 0;
}

