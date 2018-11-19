
#include<bits/stdc++.h>
using namespace std;
#define D(x)    cout << #x " = " <<(x) << endl
#define MAX     100000
typedef long long int LL;

int h, m, s, t1, t2;
vector< pair< double, bool > > seq;

int main()
{
    int i, j;

    cin >> h >> m >> s >> t1 >> t2;
    if(h == 12) h = 0;
    if(t1 == 12) t1 = 0;
    if(t2 == 12) t2 = 0;

    if(m == 0 && s == 0) seq.push_back(make_pair(h, false));
    else seq.push_back(make_pair(h + .5, false));

    if(s != 0) if(m % 5 == 0) m++;
    seq.push_back(make_pair( m / 5.0, false));
    seq.push_back(make_pair( s / 5.0, false));

    seq.push_back(make_pair(t1, true));
    seq.push_back(make_pair(t2, true));

    sort(seq.begin(), seq.end());
    for(i = 0; i < (int) seq.size(); i++){
        j = (i + 1) % seq.size();
        if(seq[i].second && seq[j].second){
            puts("YES");
            return 0;
        }
    }

    puts("NO");
    return 0;
}
