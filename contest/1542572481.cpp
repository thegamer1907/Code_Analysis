#include <stdio.h>

float hand[3];

bool in(float x, float l, float r)
{
    return x >= l && x <= r;
}

int main(void)
{
    int h, m, s, t1, t2;
    scanf("%d%d%d%d%d", &h, &m, &s, &t1, &t2);
    hand[0] = s / 5.0f;
    hand[1] = (m + s / 60.0f) / 5.0f;
    hand[2] = h % 12 + (m + s / 60.0f) / 60.0f;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < i; j++) {
            if (hand[i] < hand[j]) {
                float tmp = hand[i];
                hand[i] = hand[j];
                hand[j] = tmp;
            }
        }
    }
    if (in(t1, hand[0], hand[1]) && in(t2, hand[0], hand[1])) {
        printf("YES\n");
        return 0;
    }
    else if (in(t1, hand[1], hand[2]) && in(t2, hand[1], hand[2])) {
        printf("YES\n");
        return 0;
    }
    else if ((in(t1, hand[2], 12.0f) || in(t1, 0.0f, hand[0]))
        && (in(t2, hand[2], 12.0f) || in(t2, 0.0f, hand[0]))) {
        printf("YES\n");
        return 0;
    }
    printf("NO\n");
    return 0;
}
