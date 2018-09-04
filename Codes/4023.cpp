#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define MAXN 100000
#define MOD 761238923

vector<int> A[MAXN];
int N, M, K;
vector<pair<int, int> > segments;
vector<pair<int, int> > final_segments;

int main() {
#ifdef OJ
    freopen("input.txt", "rt", stdin);
    //    freopen("output.txt", "wt", stdout);
#endif
    std::ios_base::sync_with_stdio(false);

    scanf("%d %d", &N, &M);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            int a;
            scanf("%d", &a);
            A[i].push_back(a);
        }
    }

    for (int m = 0; m < M; m++) {
        int last = 0;
        for (int r = 1; r <= N; r++) {
            if (r == N || A[r][m] < A[r - 1][m]) {
                segments.push_back(make_pair(last, r - 1));
                last = r;
            }
        }
    }

    sort(segments.begin(), segments.end());

    //    for (int i = 0; i < segments.size(); i++) {
    //        printf("%d %d\n", segments[i].first, segments[i].second);
    //    }
    //    printf("\n");

    int last = 0;
    for (int i = 0; i < segments.size(); i++) {
        if (segments[i].first == segments[last].first) {
            last = i;
        } else if (segments[i].second > segments[last].second) {
            final_segments.push_back(segments[last]);
            last = i;
        }
    }

    final_segments.push_back(segments[last]);

    //    for (int i = 0; i < final_segments.size(); i++) {
    //        printf("%d %d\n", final_segments[i].first, final_segments[i].second);
    //    }
    //    printf("\n");

    scanf("%d", &K);
    for (int k = 0; k < K; k++) {
        int l, r;
        scanf("%d %d", &l, &r);
        l--;
        r--;

        int idx = lower_bound(final_segments.begin(), final_segments.end(), pair<int, int>(l, 0)) - final_segments.begin();
        if (idx == final_segments.size() || final_segments[idx].first > l) {
            if (idx == 0) {
                printf("No\n");
                continue;
            }
            --idx;
        }

        if (final_segments[idx].second >= r)
            printf("Yes\n");
        else
            printf("No\n");

    }


    return 0;
}
