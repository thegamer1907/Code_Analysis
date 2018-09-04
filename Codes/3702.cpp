#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    char s[101];
    cin >> s;
    int nb, ns, nc, pb, ps, pc;
    long long r;
    cin >> nb >> ns >> nc >> pb >> ps >> pc >> r;
    int arr[3] = {0, 0, 0};
    int l = strlen(s);
    for (int i = 0; i < l; i++) {
        switch (s[i]) {
        case 'B': arr[0]++;break;
        case 'S': arr[1]++;break;
        case 'C': arr[2]++;break;
        }
    }
    long long ans = 0;
    while (true) {
        r -= max(arr[0] - nb, 0) * pb;
        nb = max(nb - arr[0], 0);

        r -= max(arr[1] - ns, 0) * ps;
        ns = max(ns - arr[1], 0);

        r -= max(arr[2] - nc, 0) * pc;
        nc = max(nc - arr[2], 0);
        if (r < 0) {
            cout << ans;
            break;
        }
        ans++;
        if (!(nb * arr[0]) && !(ns * arr[1]) && !(nc * arr[2])) {
            int cost = arr[0] * pb + arr[1] * ps + arr[2] * pc;
            ans += r / cost;
            cout << ans;
            break;
        }
    }

    return 0;
}
