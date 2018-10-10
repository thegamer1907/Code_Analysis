#include <bits/stdc++.h>
using namespace std;

int sum_digits(int x) {
    int ans = 0;
    while(x) ans += x % 10, x /= 10;
    return ans;
}

int N;
vector <int> L;

int main() {
    for(int x = 19; L.size() < 10000; x+=9) {
        if(sum_digits(x) != 10) continue;
        L.push_back(x);
    }

    scanf("%d", &N);

    printf("%d\n", L[N-1]);

    return 0;
}
