#include <bits/stdc++.h>
using namespace std;

int caras[300];

int main() {
    caras['T'] = 4;
    caras['C'] = 6;
    caras['O'] = 8;
    caras['D'] = 12;
    caras['I'] = 20;
    int N ;
    char tmp[500];
    int ans = 0;

    scanf("%d", &N);
    for(int i=0; i<N; i++) {
        scanf("%s", tmp);
        ans += caras[(int) tmp[0]];
    }

    printf("%d\n", ans);
}
