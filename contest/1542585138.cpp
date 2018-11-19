#include<bits/stdc++.h>
#define x first
#define y second
#define sz size()
#define pb push_back
#define ALL(X) (X).begin(),(X).end()
using namespace std;
using ll = long long;
using ii =  pair<int,int>;
const int MOD(1e9+7);
const int MAXN(1e5+11);

int h, m, s, t1, t2;

int main()
{
    scanf("%d%d%d%d%d", &h, &m, &s, &t1, &t2);

    t1 %= 12;
    t2 %= 12;

    h %= 12;
    m %= 60;
    s %= 60;

    long double ah = (30. / 60. / 60.) * (60. * 60. * h + 60. * m + s);
    long double am = (6. / 60.) * (60. * m + s);
    long double as = (6.) * s;

    long double a1 = (30. / 60.) * (t1 * 60.);
    long double a2 = (30. / 60.) * (t2 * 60.);

    int s1 = 2, s2 = 2;

    vector<long double> fuckers = {
        ah, am, as
    };

    sort(ALL(fuckers));

    for (int i = 0; i < fuckers.sz; i++) {
        auto s = fuckers[i], e = fuckers[(i+1)%fuckers.sz];
        if (s > e) e += 360;
        if (s < a1 && a1 < e)
            s1 = i;
        if (s < a2 && a2 < e)
            s2 = i;
    }


    puts(s1 == s2 ? "YES" : "NO");
    return 0;
}

