#include <cstdio>
using namespace std;

int N, K, S;
int bucket[20];

int getOnes(int x) {
    int ans = 0;
    while(x) 
        ans += (x % 2), x/=2;
    return ans;
}

bool matches(int A, int B) {
    return (~A|B) == ~A;
}

int main() {
    scanf("%d %d", &N, &K);
    S = 1 << K;

    for(int i = 0; i < N; i++) {
        int X = 0, Y;

        for(int j = K - 1; j >= 0; j--) {
            scanf("%d", &Y);
            X += (Y << j);
        }

        bucket[X]++;
    }

    // Case 0-ones
    if(bucket[0]) {
        printf("YES\n");
        return 0;
    }

    // Case 1-one
    for(int r = 1; r < K; r++) {
        for(int i = 0; i < S; i++) {
            if(getOnes(i) != r || !bucket[i]) continue;

            for(int j = 0; j < S; j++) {
                if(matches(i, j) && bucket[j]) {
                    printf("YES\n");
                    return 0;
                }
            }
        }
    }

    printf("NO\n");

    return 0;
}