#include <bits/stdc++.h>
#define bst ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define sqr(x) ((x)*(x))
#define pb push_back
#define mp make_pair
#define f first
#define s second

using namespace std;
typedef long long ll;
typedef long double ld;

ll n, m, i, j, x, y, maxi, m2, mini, sum, mas[200];
bool d;
int main() { //bst
    cin >> n >> m, sum = m;
    m2 = m;
    for (i = 0; i < n; i++) {
        cin >> mas[i], sum += mas[i];
        maxi = max(maxi, mas[i]);
    }
    sort(mas, mas + n);
    while (m > 0) {
        if (mas[0] == mas[n - 1])
            break;
        for (i = 0; i < n; i++)
            if (mas[i] < mas[i + 1])
                if (m > 0) mas[i]++, m--;

    }
    while (m > 0) {
        for (i = 0; i < n; i++)
            if (m > 0) mas[i]++, m--;
    }
    for (i = 0; i < n; i++)
        mini = max(mas[i], mini);
    cout << mini << " " << maxi + m2;
    return 0;
}
