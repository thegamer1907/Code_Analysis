#include<bits/stdc++.h>
using namespace std;
char q[50];

int main() {
    int noc, time;
    scanf("%d", &noc);
    scanf("%d", &time);
    for (int i = 0; i < noc; i++) {
        cin >> q[i];
    }
    while (time--) {
        for (int i = 1; i < noc; ++i) {
            if (q[i] == 'G' && q[i - 1] == 'B') {
                q[i] = 'B';
                q[i - 1] = 'G';
                ++i;
            }
        }
    }


    for (int p = 0; p < noc; p++) {
        printf("%c", q[p]);
    }
    return 0;
}