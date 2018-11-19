#include <cstdio>
#include <cstring>

int main() {
    int h, m, s, t1, t2;
    while (scanf("%d%d%d%d%d", &h, &m, &s, &t1, &t2) != EOF) {
        bool ret = false;
        for (int i = t1%12, j = t2%12; !ret; ) {
            if (i == j) ret = true;
            else {
                //printf("i=%d, next_i=%d\n", i, (i+1)%12);

                int hp = h%12;
                //printf("hp=%d\n", hp);
                if (i == hp) break;

                int mp = m/5;
                //printf("mp=%d\n", mp);
                if (i == mp) break;

                int sp = s/5;
                //printf("sp=%d\n", sp);
                if (i == sp) break;
            }
            i = (i+1)%12;
        }

        //printf("============ ret=%d\n", ret);

        for (int i = t1%12, j = t2%12; !ret; ) {
            if (i == j) ret = true;
            else {
                //printf("i=%d, next_i=%d\n", i, (i-1+12)%12);

                int hp = h%12;
                //printf("hp=%d\n", hp);
                if ((i-1+12)%12 == hp) break;

                int mp = m/5;
                //printf("mp=%d\n", mp);
                if ((i-1+12)%12 == mp) break;

                int sp = s/5;
                //printf("sp=%d\n", sp);
                if ((i-1+12)%12 == sp) break;
            }
            i = (i-1+12)%12;
        }

        if (ret) puts("YES");
        else puts("NO");
    }
    return 0;
}