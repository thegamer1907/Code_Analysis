#include<bits/stdc++.h>
#define LL long long
using namespace std;

int na[100100], nb[101000];

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    for(int i = 1; i <= a; ++i) scanf("%d", na + i);
    for(int i = 1; i <= b; ++i) scanf("%d", nb + i);
    if(b > 1) {
        printf("Yes\n");
        return 0;
    }
    for(int i = 1; i <= a; ++i)
        if(na[i] == 0)
            na[i] = nb[1];
    for(int i = 1; i <= a - 1; ++i) {
        if(na[i] > na[i + 1]) {
            printf("Yes\n");
            return 0;
        }
    }
    printf("No\n");
    return 0;
}
