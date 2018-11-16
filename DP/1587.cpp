#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <iostream>
#include <queue>
#include <map>
#include <cmath>
#include <sstream>
using namespace std;
const int maxn = 1e5+10;
const int INF = 0x3f3f3f;
typedef long long ll;
typedef unsigned long long LL;
int n, m;
char s[maxn];

int main()
{
    scanf("%s", s);
    int len = strlen(s);
    int flag = 0, a = 0, b = 0;
    for (int i = 0; i < len; i++) {
        if (i <= len-2) {
            if (s[i] == 'A' && s[i+1] == 'B' && a == 0) {
                a = 1;
                i++;
            }
            else if (s[i] == 'B' && s[i+1] == 'A' && b == 0 && a == 1) {
                i++;
                b = 1;
            }
        }
    }
    if (a == 1 && b == 1) {
        printf("YES\n");
    }
    else {
        a = 0, b = 0;
        for (int i = 0; i < len; i++) {
            if (i <= len-2) {
                if (s[i] == 'B' && s[i+1] == 'A' && b == 0) {
                    i++;
                    b = 1;
                }
                else if (s[i] == 'A' && s[i+1] == 'B' && a == 0 && b == 1) {
                    a = 1;
                    i++;
                }
            }
        }
        if (a == 1 && b == 1)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
