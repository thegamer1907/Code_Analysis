#include<iostream>  
#include<string>  
#include<cstring>  
#include<vector>  
#include<map>  
#include<algorithm>  
#include<queue>  
#include<set>  
#include<cstdio>  
#include<functional>  
#include<iomanip>  
#include<cmath>  
#include<stack>  
//#define mod 1030  
#define size 3  
using namespace std;  
typedef long long LL;  
const int maxn = (LL)1e5 + 100;  
const int maxm = 50000;  
const LL inf = (LL)6 * LL(1e18);  
const double eps = 1e-8;  
double a[4];  
int main() {  
    double m, s;  
    int h, t1, t2;  
    while (scanf("%d", &h) == 1) {  
        scanf("%lf%lf%d%d", &m, &s, &t1, &t2);  
        h = h % 12, t1 = t1 % 12, t2 = t2 % 12;  
        double tmp = h, tmp1 = t1, tmp2 = t2;  
        a[0] = 6 * s;  
        a[1] = m * 6 + s / 10;  
        a[2] = 30 * tmp + (m + s / 60) / 2;  
        sort(a, a + 3);  
        tmp1 = 30 * tmp1, tmp2 = 30 * tmp2;  
        int lo1 = -1, lo2 = -1;  
        for (int i = 0; i < 2; i++) {  
            if (tmp1 >= a[i] && tmp1 <= a[i + 1]) lo1 = i;  
            if (tmp2 >= a[i] && tmp2 <= a[i + 1]) lo2 = i;  
        }  
        if (lo1 == -1) lo1 = 2;  
        if (lo2 == -1) lo2 = 2;  
        printf("%s\n", lo1 == lo2 ? "YES" : "NO");  
    }  
}  