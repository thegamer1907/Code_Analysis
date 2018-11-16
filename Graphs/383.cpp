#include <bits/stdc++.h>

using namespace std;

int n, t;

char *swapq(char *q) {
    char *newq;
    newq=(char *)malloc(sizeof(char)*52);

    for (int i=0; i<n; ++i) {
        if (q[i]=='B' && q[i+1]=='G'){
            newq[i]='G';
            newq[i+1]='B';
            i++;
            continue;
        }
        newq[i]=q[i];
    }
    free(q);
    return newq;
}

int main() {
    cin >> n >> t;
    char *q;
    q=(char *)malloc(sizeof(char)*52);
    cin >> q;

    for (int i=0; i<t; ++i) {
        q=swapq(q);
    }

    for (int i=0; i<n; ++i) {
        printf("%c",q[i]);
    }
    printf("\n");

    free(q);

    return 0;
}
