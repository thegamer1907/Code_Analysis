#include <stdio.h>

double oclock[3];

bool in(double x, double l, double r)
{
    return x >= l && x <= r;
}

int main(void)
{
    int h, m, s, t1, t2;
    scanf("%d%d%d%d%d", &h, &m, &s, &t1, &t2);
    oclock[0] = s / 5.0;
    oclock[1] = (m + s / 60.0) / 5.0;
    oclock[2] = h % 12 + m / 60.0 + s / 3600.0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < i; j++) {
            if (oclock[i] < oclock[j]) {
                double tmp = oclock[i];
                oclock[i] = oclock[j];
                oclock[j] = tmp;
            }
        }
    }
    if (in(t1, oclock[0], oclock[1]) && in(t2, oclock[0], oclock[1])) {
        printf("YES\n");
        return 0;
    }
    else if (in(t1, oclock[1], oclock[2]) && in(t2, oclock[1], oclock[2])) {
        printf("YES\n");
        return 0;
    }
    else if ((in(t1, oclock[2], 12.0) || in(t1, 0.0, oclock[0]))
        && (in(t2, oclock[2], 12.0) || in(t2, 0.0, oclock[0]))) {
        printf("YES\n");
        return 0;
    }
    printf("NO\n");
    return 0;
}
