#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

int main() {
    int h, m, s, t1, t2, tcur, tnext;
    scanf("%d %d %d %d %d", &h, &m, &s, &t1, &t2);
    t1 *= 2;
    t2 *= 2;
    h *= 2;
    if (m > 0 || s > 0){
        h += 1;
        if (h > 24){
            h -= 24;
        }
    }
    
    if (m % 5 == 0 && s == 0){
        m /= 5;
        if (m == 0){
            m = 12;
        }
        m *= 2; 
    }
    else{
        m = m / 5 * 2 + 1;
    }
    
    if (s % 5 == 0){
        s /= 5;
        if (s == 0){
            s = 12;
        }
        s *= 2; 
    }
    else{
        s = s / 5 * 2 + 1;
    }
    
    tcur = t1;
    while (true){
        tnext = tcur + 1;
        if (tnext > 24){
            tnext -= 24;
        }
        if (tnext == h || tnext == m || tnext == s){
            break;
        }
        tcur = tnext;
        if (tcur == t2){
            printf("YES");
            return 0;
        }
    }
    
    tcur = t1;
    while (true){
        tnext = tcur - 1;
        if (tnext == 0){
            tnext += 24;
        }
        if (tnext == h || tnext == m || tnext == s){
            break;
        }
        tcur = tnext;
        if (tcur == t2){
            printf("YES");
            return 0;
        }
    }
    printf("NO");
    return 0;
}