#include <bits/stdc++.h>
using namespace std;
const int limN = 1e5 + 5;
typedef long long ll;

ll minC(int N, int *arr, ll k) {
    static ll cpy[limN];
    ll ans = 0;
    for(int i=0; i<N; i++)
        cpy[i] = arr[i] + k*(i+1);
    sort(cpy, cpy+N);
    for(int i=0; i<k; i++)
        ans += cpy[i];
    return ans;
}

int main() {
    int N, B;
    int arr[limN];
    int ini, fin;

    scanf("%d%d", &N, &B);
    for(int i=0; i<N; i++)
        scanf("%d", &arr[i]);

    for(ini=0, fin=N; ini<fin; ) {
        int piv = (ini+fin)/2 + 1;
        if(minC(N, arr, piv) <= B)
            ini = piv;
        else
            fin = piv-1;
    }

    printf("%d %d\n", ini, (int) minC(N, arr, ini));
}
