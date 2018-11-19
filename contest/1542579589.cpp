#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define fir first
#define sec second
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int h, m, s, t1, t2;
    cin >> h >> m >> s >> t1 >> t2;
    t1=(t1%12)*5*60*60, t2=(t2%12)*5*60*60;
    h=(h%12)*5*60*60+60*m+s, m=m*60*60+60*s, s=s*60*60;
    // << h << " " << m << " " << s << " " << t1 << " " << t2 <<endl;
    bool pos = true;
    for(int g=t1; g!=t2 && pos; g=(g+1)%216000)
        pos = !(g==h || g==m || g==s);
    if(!pos) {
        pos = true;
        for(int g=t1; g!=t2 && pos; g=(g-1+216000)%216000)
            pos = !(g==h || g==m || g==s);
    }
    (pos) ? cout << "YES\n" : cout << "NO\n";
    return 0;
}
