#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{
    int h, m, s, t1, t2;
    int i, j, k;

    cin>>h>>m>>s>>t1>>t2;

    double ss = (double) s;
    ss = ss/5.0;
    double mm = (double) m;
    mm = mm/5.0;
    mm += ss/60.0;
    double hh = (double) h;
    hh = hh + mm/60.0;

    if(hh>12.0) hh -= 12;
    if(t1>t2) swap(t1,t2);
    int kata = 0;

    if(hh > t1 && hh <t2)
        kata++;
    if(mm > t1 && mm <t2)
        kata++;
    if(ss > t1 && ss <t2)
        kata++;

    if(kata == 0 || kata == 3)
        cout<< "yes";
    else cout<< "no";

    return 0;
}
