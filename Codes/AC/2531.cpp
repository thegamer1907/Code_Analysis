#include <bits/stdc++.h>

typedef long long ll;

const int N = 10000100;

bool prime[N];
int x[N];
int divisors[N][10];
int size[N];
int answerForDivisor[N];

void buildPrime(void) {
    for (int i = 2; i < N; ++i) {
        prime[i] = true;
    }
    for (int i = 2; i < N; ++i) {
        if (prime[i]) {
            divisors[i][size[i]++] = i;
            //if (1ll * i * i < N) {
                for (int j = 2 * i; j < N; j += i) {
                    prime[j] = false;
                    divisors[j][size[j]++] = i;
                }
            //}
        }
    }
}

int main(void) {
    buildPrime();
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &x[i]);
        for (int j = 0; j < size[x[i]]; ++j) {
            ++answerForDivisor[divisors[x[i]][j]];
        }
    }
    for (int i = 1; i < N; ++i) {
        answerForDivisor[i] += answerForDivisor[i - 1];
    }
    int m;
    scanf("%d", &m);
    for (int i = 0; i < m; ++i) {
        int l, r;
        scanf("%d%d", &l, &r);
        int answer = answerForDivisor[std::min(N - 10, r)] - answerForDivisor[std::min(N - 10, l - 1)];
        printf("%d\n", answer);
    }
    return 0;
}
