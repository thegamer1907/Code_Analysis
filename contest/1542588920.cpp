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

double a[6];
bool chk[6];
double tmp;
int ttmp;
int h, m, s, t1, t2, myloc, hisloc;

int main() {
    scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
    a[4] = 5 * t1;
    a[5] = 5 * t2;
    a[1] = s;
    a[2] = m + s / 60;
    a[3] = 5 * h + m / 60 + s / 3600;
    for(int j = 1 ; j <= 5; j++) {
        tmp = -1;
        ttmp = 0;
        for(int i = 1 ; i <= 5; i++) {
            if(!chk[i] && a[i] > tmp) {
                tmp = a[i];
                ttmp = i;
            }
        }
        chk[ttmp] = 1;
        if(ttmp == 4)
            myloc = j;
        if(ttmp == 5)
            hisloc = j;
    }
    if(myloc == 5 && hisloc == 1)
        printf("YES");
    else if(myloc == 1 && hisloc == 5)
        printf("YES");
    else if(myabs(myloc - hisloc) == 1)
        printf("YES");
    else
        printf("NO");
}
