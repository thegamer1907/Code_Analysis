#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <climits>
#include <iomanip>
#include <queue>
#include <list>
#include <cstring>
#include <math.h>
#include <fstream>

#define rep(i, a, b) for (int i = (a), i##_end_ = (b); i < i##_end_; ++i)
#define rrep(i, a, b) for (int i = (a), i##_end_ = (b); i > i##_end_; --i)
#define vi vector<int>
#define pii pair<int,int>
#define pis pair<int,string>
#define pss pair<string,string>

using namespace std;

typedef long long int lli;
typedef unsigned long long int ulli;
typedef long double ld;

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    float h,m,s,t1,t2;
    cin >> h >> m >> s >> t1 >> t2;

    float T1=min(t1,t2);
    float T2=max(t1,t2);

    int H=0,M=0,S=0;

    if(m==60) m=0;
    if(h==12) h=0;
    if(s==60) s=0;

    m+=(s/60);
    h+=(m/60);



    float m1=((m/60)*12),s1=((s/60)*12);

    if((m1>T1 && m1<T2)) M=1;
    if((s1>T1 && s1<T2)) S=1;
    if((h>T1 && h<T2)) H=1;
//cout << m1 << " " << s1 << " " << h << endl;

  //  cout << H << " " << M << " " << S << endl;
    if((H&M&S)||(!(H|M|S)))
        cout << "YES";
        else cout << "NO";
    return 0;
}
