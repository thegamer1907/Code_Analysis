#include <stdio.h>

double hand[3];

bool in(double x, double l, double r)
{
    return x >= l && x <= r;
}

int main(void)
{
    int h, m, s, t1, t2;
    scanf("%d%d%d%d%d", &h, &m, &s, &t1, &t2);
    hand[0] = s / 5.0;
    hand[1] = (m + s / 60.0) / 5.0;
    hand[2] = h % 12 + m / 60.0 + s / 3600.0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < i; j++) {
            if (hand[i] < hand[j]) {
                double tmp = hand[i];
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
    else if ((in(t1, hand[2], 12.0) || in(t1, 0.0, hand[0]))
        && (in(t2, hand[2], 12.0) || in(t2, 0.0, hand[0]))) {
        printf("YES\n");
        return 0;
    }
    printf("NO\n");
    return 0;
}
