#include <bits/stdc++.h>

typedef long long ll;

int main(void) {
    int n, a, b;
    scanf("%d%d%d", &n, &a, &b);
    std::vector<int> shit;
    for (int i = 1; i <= n; ++i) {
        shit.push_back(i);
    }
    for (int it = 1; shit.size() > 1; ++it) {
        std::vector<int> newShit;
        for (int j = 0; j < shit.size(); j += 2) {
            if (shit[j] == a && shit[j + 1] == b || shit[j] == b && shit[j + 1] == a) {
                if (shit.size() == 2) {
                    printf("Final!\n");
                } else {
                    printf("%d\n", it);
                }
                return 0;
            }
            if (shit[j] == a || shit[j] == b) {
                newShit.push_back(shit[j]);
            } else {
                newShit.push_back(shit[j + 1]);
            }
        }
        shit.swap(newShit);
    }
    return 0;
}