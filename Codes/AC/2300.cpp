#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

const int MAXN = 1e6 + 6, MAXM = 1e7 + 700;
int n, num;
int x[MAXN];
int cnt[MAXM];
int Arr[MAXM];
int seg[4 * MAXN];
int num_prime[MAXM];
int last_prime[MAXM];
int past_prime[MAXM];
bool not_prime[MAXM];

void build(int s = 0, int e = MAXN, int id = 1) {
    if (e - s == 1) {
        seg[id] = Arr[s];
        return ;
    }
    int mid = e + s >> 1;
    build(s, mid, id << 1);
    build(mid, e, id << 1 | 1);
    seg[id] = seg[id << 1] + seg[id << 1 | 1];
}

int get(int l, int r, int s = 0, int e = MAXN, int id = 1) {
    if (r <= s || e <= l)
        return 0;
    if (l <= s && e <= r)
        return seg[id];
    int mid = e + s >> 1;
    return get(l, r, s, mid, id << 1) + get(l, r, mid, e, id << 1 | 1);
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &x[i]);
        cnt[x[i]]++;
    }
    not_prime[0] = not_prime[1] = 1;
    for (int i = 2; i < MAXM; i++)
        if (!not_prime[i]) {
            for (int j = i + i; j < MAXM; j += i) {
                not_prime[j] = 1;
                Arr[num] += cnt[j];
            }
            Arr[num] += cnt[i];
            num_prime[i] = num;
            num++;
        }
    int last = 0;
    for (int i = 2; i < MAXM; i++) {
        if (!not_prime[i])
            last = i;
        last_prime[i] = last;
    }
    int past = 0;
    for (int i = MAXM - 1; ~i; i--) {
        if (!not_prime[i])
            past = i;
        past_prime[i] = past;
    }
    build();
    int q;
    scanf("%d", &q);
    while (q--) {
        int l, r;
        scanf("%d%d", &l, &r);
        r = min(r, 10000000);
        l = min(l, 10000000);
        int L = num_prime[past_prime[l]];
        int R = 1 + num_prime[last_prime[r]];
        printf("%d\n", get(L, R));
    }
}
