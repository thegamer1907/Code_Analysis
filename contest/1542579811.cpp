#include <bits/stdc++.h>
#define maxn 10004
#define max1 1000000007

using namespace std;
int time1, clgt, caidcm, yasuo, bestyasuo, cakcak, concak;

void nhap()
{
    cin >> time1 >> clgt >> caidcm >> yasuo >> bestyasuo;
    time1 = time1 % 12;
    yasuo = yasuo % 12;
    bestyasuo = bestyasuo % 12;
    time1 = time1 * 3600 + clgt * 60 + caidcm;
    clgt = clgt * 720 + caidcm * 12;
    caidcm = caidcm * 720;
    if (yasuo > bestyasuo) swap(yasuo,bestyasuo);
    yasuo = yasuo * 3600;
    bestyasuo = bestyasuo * 3600;
}

void xuli()
{
    if (yasuo <= bestyasuo)
    {
        for (int i = yasuo; i <= bestyasuo; i++)
        if (i == time1 || i == clgt || i == caidcm) {
            concak++;
            break;
        }
        for (int i = bestyasuo; i <= yasuo + 3600 * 12; i++) {
            int xxx = i % 43200;
            if (xxx == time1 || xxx == clgt || xxx == caidcm) {
                cakcak++;
                break;
            }
        }
    }
}

void tach()
{
    if (cakcak + concak == 2) cout << "NO";
    else cout << "YES";
}

int main()
{
    ios_base::sync_with_stdio(0);
    nhap();
    xuli();
    tach();
    return 0;
}
