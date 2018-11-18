#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int h, m, s, a, b;
int main() {
    while (~scanf("%d%d%d%d%d", &h, &m, &s, &a, &b)) {
        double hh, mm, ss;
        h %= 12;
        hh = h*30.0+m/10.0+s/360.0;
        mm = m*6.0+s/10.0;
        ss = s*6.0;
        double aa, bb;
        a %= 12;
        b %= 12;
        aa = a*30.0;
        bb = b*30.0;
        if (hh > mm) {
            double temp = hh; hh = mm; mm = temp;
        }
        if (hh > ss) {
            double temp = hh; hh = ss; ss = temp;
        }
        if (mm > ss) {
            double temp = mm; mm = ss; ss = temp;
        }
        int ans1, ans2;
        if (aa > hh&&aa < mm)
            ans1 = 1;
        else if (aa > mm&&aa < ss)
            ans1 = 2;
        else
            ans1 = 3;
        if (bb > hh&&bb < mm)
            ans2 = 1;
        else if (bb > mm&&bb < ss)
            ans2 = 2;
        else
            ans2 = 3;
        if (ans1 == ans2)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}