#include <bits/stdc++.h>
#define fr(i,a,b) for (int i = (a); i < (b); ++i)
using namespace std;

char str[1000005];
int n, z[1000005];

int main() {
    scanf("%s", str);
    n = strlen(str);
    /*int L = 0, R = 0;
    fr(i,1,n) {
        if (i > R) {
            L = R = i;
            while (R < n && str[R-L] == str[R]) ++R;
            z[i] = R-L; --R;
        } else {
            int k = i-L;
            if (z[k] < R-i+1) z[i] = z[k];
            else {
                L = i;
                while (R < n && str[R-L] == str[R]) ++R;
                z[i] = R-L; --R;
            }
        }
    }*/
    z[0] = n;
    for (int i = 1, l = 0, r = 0; i < n; ++i) {
        if (l && (i + z[i-l] < r)) z[i] = z[i-l];
        else {
            int j = min(l ? z[i-l] : 0, i > r ? 0: r-i);
            while (str[i+j] == str[j]) ++j;
            z[i] = j, l = i, r = i+j;
        }
    }
    //for (int i = 0; i < n; ++i) printf("%d:  %d\n", i, z[i]);
    int maxi = 0, ans = 0;
    fr(i,1,n) {
        if (z[i] == n-i && maxi >= n-i) {
            ans = n-i; break;
        }
        maxi = max(maxi, z[i]);
    }
    if (ans == 0) printf("Just a legend\n");
    else {
        str[ans] = '\0';
        printf("%s\n", str);
    }
    return 0;
}
