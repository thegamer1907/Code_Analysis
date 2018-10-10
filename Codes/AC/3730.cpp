#include<bits/stdc++.h>
using namespace std;

int main()
{
    string ss;
    cin >> ss;
    int b = 0, s = 0, c = 0;
    for (int i = 0; i < ss.size(); i++) {
        if (ss[i] == 'B') b++;
        if (ss[i] == 'S') s++;
        if (ss[i] == 'C') c++;
    }
    int _b, _s, _c;
    scanf("%d%d%d", &_b, &_s, &_c);
    long long int bp, sp, cp;
    scanf("%I64d%I64d%I64d", &bp, &sp, &cp);
    long long int rubles;
    scanf("%I64d", &rubles);
    long long int low = 0, high = LLONG_MAX / 10000;
    long long int maxx = -1;
    while (low <= high) {
        long long int mid = (low + high) / 2;
        long long int b_ = mid * b, s_ = mid * s, c_ = mid * c;
        b_ -= _b; s_ -= _s; c_ -= _c;
        if (b_ < 0) b_ = 0; if (s_ < 0) s_ = 0; if (c_ < 0) c_ = 0;
        long long int z = bp * b_ + sp * s_ + cp * c_;
        if (z > rubles) {
            high = mid - 1;
        }
        else if (z < rubles) {
            maxx = max(maxx, mid);
            low = mid + 1;
        }
        else {
            maxx = mid;
            break;
        }
    }
    printf("%I64d\n", maxx);

    return 0;
}
