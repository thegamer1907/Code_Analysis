#include<bits/stdc++.h>
#define LL long long
using namespace std;

char s[60];

int main() {
    int n, t;
    scanf("%d %d", &n, &t);
    scanf("%s", s + 1);
    for(int i = 1; i <= t; ++i) {
        for(int j = 1; j <= n - 1; ++j) {
            if(s[j] == 'B' && s[j + 1] == 'G') {
                swap(s[j], s[j + 1]);
                ++j;
            }
        }
        //printf("%s\n", s + 1);
    }
    printf("%s\n", s + 1);
    return 0;
}
