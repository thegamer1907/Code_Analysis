#include <bits/stdc++.h>
using namespace std;
#define clr(i, j)     memset(i, j, sizeof(i))
typedef long long     ll;
typedef long double   ld;

double h, m, s, t1, t2;
bool valid()
{
    if(t1 == h || t1 == m || t1 == s || t2 == h || t2 == m || t2 == s)
        return 0;
    return 1;
}
int main()
{
    cin >> h >> m >> s >> t1 >> t2;
    vector<double> v;
    h = (h + m/60 + s/3600);
    if(h > 24)
        h -= 24;
    if(h >= 12)
        h -= 12;
    m = (m/5 + s/300);
    if(m >= 12)
        m -= 12;
    s = (s/5);
    if(s >= 12)
        s -= 12;
    if(t1 == 12)
        t1 -= 12;
    if(t2 == 12)
        t2 -= 12;
    if(!valid)
    {
        cout << "NO" << endl;
        return 0;
    }
    v.push_back(h);
    v.push_back(m);
    v.push_back(s);
    v.push_back(t1);
    v.push_back(t2);
    sort(v.begin(), v.end());
    for(int i=0; i<v.size(); i++)
    {
        if(i == v.size()-1)
        {
            if((v[i] == t1 && v[0] == t2) ||
                (v[i] == t2 && v[0] == t1) )
            {
                cout << "YES" << endl;
                return 0;
            }
        }
        else if((v[i] == t1 && v[i+1] == t2) ||
                 (v[i] == t2 && v[i+1] == t1))
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    //for(int i=0; i<v.size(); i++)
      //  cout << v[i] << " " << endl;
    cout << "NO" << endl;
}
