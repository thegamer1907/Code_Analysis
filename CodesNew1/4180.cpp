#include <iostream>
#include <cassert>

const size_t MAX_N = 200000;
int strengths[MAX_N];
long long strSum[MAX_N + 1]; // [0; i)

size_t n;
size_t firstAlive;
int firstHealth;

void calcSums() {
    strSum[0] = 0;
    for (size_t len = 1; len <= n; len++)
        strSum[len] = strSum[len - 1] + strengths[len - 1];
}

long long totalStrength(size_t left, size_t right) {
    return strSum[right] - strSum[left];
}

void shoot(long long arrows) {
    if (firstHealth > arrows) {
        firstHealth -= arrows;
        return;
    }

    arrows -= firstHealth;

    size_t notAlive = firstAlive;
    size_t nextAlive = n;
    while (nextAlive - notAlive > 1) {
        size_t mid = (nextAlive + notAlive) / 2;
        if (totalStrength(firstAlive + 1, mid + 1) > arrows)
            nextAlive = mid;
        else
            notAlive = mid;
    }

    if (nextAlive == n) {
        firstAlive = 0;
        firstHealth = strengths[0];
        return;
    }

    firstHealth = totalStrength(firstAlive + 1, nextAlive + 1) - arrows;
    firstAlive = nextAlive;
    assert(0 < firstHealth);
    assert(firstHealth <= strengths[firstAlive]);
}

int main() {
    size_t q;
    std::cin >> n >> q;
    for (size_t i = 0; i < n; i++)
        std::cin >> strengths[i];
    calcSums();

    firstAlive = 0;
    firstHealth = strengths[0];
    for (size_t i = 0; i < q; i++) {
        long long arrows;
        std::cin >> arrows;
        shoot(arrows);
        std::cout << n - firstAlive << std::endl;
    }
}
