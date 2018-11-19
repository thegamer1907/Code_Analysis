#include<bits/stdc++.h>

using namespace std;

inline long long mymaxll(long long q,long long w) {
    return q > w ? q : w;
}

inline int mymax(int q,int w) {
    return q > w ? q : w;
}

inline double mymaxlf(double q,double w) {
    return q > w ? q : w;
}

inline long long myminll(long long q,long long w) {
    return q < w ? q : w;
}

inline int mymin(int q,int w) {
    return q < w ? q : w;
}

inline double myminlf(double q,double w) {
    return q < w ? q : w;
}

inline long long myabsll(long long q){
    return q < 0 ? -q : q;
}

inline int myabs(int q) {
    return q < 0 ? -q : q;
}

inline double myabslf(double q) {
    return q < 0 ? -q : q;
}

int n , k, cnt, tmp, l;
int a[20];
int main() {
    scanf("%d%d",&n,&k);
    for(int i = 0 ; i < n ; i++) {
        tmp = 0;
        for(int j = 0 ; j < k ; j++) {
            tmp <<= 1;
            scanf("%d",&l);
            tmp += l;
        }
        a[tmp]++;
    }
    if(a[0])
        printf("YES");
    else if(k == 1)
        printf("NO");
    else if(k == 2) {
        if(a[1] && a[2])
            printf("YES");
        else
            printf("NO");
    }
    else if(k == 3) {
        if(a[1] && (a[4] || a[2] || a[6]))
            printf("YES");
        else if(a[2] && (a[1] || a[4] || a[5]))
            printf("YES");
        else if(a[4] && (a[1] || a[2] || a[3]))
            printf("YES");
        else
            printf("NO");
    }
    else if(k == 4) {
        if(a[1] && (a[2] || a[4] || a[8] || a[6] || a[12] || a[10] || a[14]))
            printf("YES");
        else if(a[2] && (a[1] || a[4] || a[8] || a[5] || a[9] || a[12] || a[13]))
            printf("YES");
        else if(a[4] && (a[1] || a[2] || a[8] || a[3] || a[10] || a[9] || a[11]))
            printf("YES");
        else if(a[8] && (a[1] || a[2] || a[4] || a[3] || a[6] || a[5] || a[7]))
            printf("YES");
        else if(a[3] && a[12])
            printf("YES");
        else if(a[5] && a[10])
            printf("YES");
        else if(a[9] && a[6])
            printf("YES");
        else {
            for(int i1 = 1 ; i1 <= 12 ; i1++) {
                if(!a[i1])
                    continue;
                if(i1 == 1 || i1 == 2 || i1 == 4 || i1 == 8 || i1 == 7 || i1 == 11)
                    continue;
                for(int i2 = 1 ; i2 <= 12 ; i2++) {
                    if(!a[i2])
                        continue;
                    if(i1 == i2)
                        continue;
                    if(i2 == 1 || i2 == 2 || i2 == 4 || i2 == 8 || i2 == 7 || i2 == 11)
                        continue;
                    for(int i3 = 1 ; i3 <=12 ; i3++) {
                        if(!a[i3])
                            continue;
                        if(i1 == i3)
                            continue;
                        if(i2 == i3)
                            continue;
                        if(i3 == 1 || i3 == 2 || i3 == 4 || i3 == 8 || i3 == 7 || i3 == 11)
                            continue;
                        for(int i4 = 1 ; i4 <= 12; i4++) {
                            if(!a[i4])
                                continue;
                            if(i1 == i4)
                                continue;
                            if(i2 == i4)
                                continue;
                            if(i3 == i4)
                                continue;
                            if(i4 == 1 || i4 == 2 || i4 == 4 || i4 == 8 || i4 == 7 || i4 == 11)
                                continue;
                            if(i1 + i2 + i3 + i4 == 30) {
                                printf("YES");
                                return 0;
                            }
                        }
                    }
                }
            }
            printf("NO");
        }
    }
    return 0;
}
