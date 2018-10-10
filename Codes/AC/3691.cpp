#include <bits/stdc++.h>

using namespace std;

int cnt[5];

int main()
{
    string s;
    int a, b, c;
    int p1, p2, p3;
    long long r;
    cin >> s >> a >> b >> c >> p1 >> p2 >> p3 >> r;
    int len = s.length();
    for (int i = 0; i < len; i++)
    {
        if (s[i] == 'B')
        {
            cnt[1]++;
        }
        else if (s[i] == 'S')
        {
            cnt[2]++;
        }
        else
        {
            cnt[3]++;
        }
    }
    long long res = 0;/*min((cnt[1] > 0 ? a/cnt[1]:1e9), min((cnt[2] > 0 ? b/cnt[2]:1e9),
                                                         (cnt[3] > 0 ? c/cnt[3]:1e9)));
    a -= res*cnt[1];
    b -= res*cnt[2];
    c -= res*cnt[3];*/
    while ((cnt[1] > 0 && a > 0) || (cnt[2] > 0 && b > 0) || (cnt[3] > 0 && c > 0))
    {
        //cout << a << " " << b << " " << c << endl;
        if (a < cnt[1])
        {
            r -= (cnt[1]-a)*p1;
            a = cnt[1];
        }
        if (b < cnt[2])
        {
            r -= (cnt[2]-b)*p2;
            b = cnt[2];
        }
        if (c < cnt[3])
        {
            r -= (cnt[3]-c)*p3;
            c = cnt[3];
        }
        if (r < 0)
        {
            break;
        }
        res++;
        a -= cnt[1];
        b -= cnt[2];
        c -= cnt[3];
    }
    if (r > 0)
    {
        res += r / (cnt[1]*p1 + cnt[2]*p2 + cnt[3]*p3);
    }
    cout << res;
    //r += a*p1*(cnt[1] > 0) + b*p2*(cnt[2] > 0) + c*p3*(cnt[3] > 0);
    return 0;
}