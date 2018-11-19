#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

int b[200];

int main() {
    int n, k, pr = 1;
    scanf("%d %d", &n, &k);
    for (int i = 0; i < k; i++){
        pr *= 2;
    }
    for (int i = 0; i < n; i++){
        int res = 0;
        for (int j = 0; j < k; j++){
            int x;
            scanf("%d", &x);
            res *= 2;
            res += x;
        }
        b[res]++;
        if (res == 0){
            printf("YES");
            return 0;
        }
    }
    for (int i = 0; i < pr; i++){
        for (int j = 0; j < pr; j++){
            if ((i & j) == 0 && b[i] > 0 && b[j] > 0){
                printf("YES");
                return 0;
            }
        }
    }
    printf("NO");
    return 0;
}