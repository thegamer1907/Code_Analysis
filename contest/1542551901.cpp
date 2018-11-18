#include <bits/stdc++.h>
using namespace std;
int main()
{
    double h,m,s,t1,t2;
    cin >> h >> m >> s >> t1 >> t2;
    m += s/60;
    h = ((int)h)%12;
    h += m/60;
    int l1 = min(t1,t2);
    int l2 = max(t1,t2);
    bool cond1 = (h>l1&&h<l2);
    bool cond2 = (m/5>l1&&m/5<l2);
    bool cond3 = (s/5>l1&&s/5<l2);
    if((cond1&&cond2&&cond3)||(!cond1&&!cond2&&!cond3))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
