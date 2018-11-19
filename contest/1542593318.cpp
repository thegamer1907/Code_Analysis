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

int n;
char tmp, ttmp;
char a,b;
bool chk, chkk;

int main() {
    scanf("%c%c\n",&a,&b);
    scanf("%d\n",&n);
    for(int i = 0 ; i< n ; i++) {
        scanf("%c%c",&tmp,&ttmp);
        if(tmp == b)
            chk = 1;
        if(ttmp == a)
            chkk = 1;
        if(tmp == a && ttmp == b)
            chk = 1, chkk = 1;
        if(i != n - 1)
            scanf("\n");
    }
    if(chk && chkk)
        printf("YES");
    else
        printf("NO");
}
