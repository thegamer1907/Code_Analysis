#include <bits/stdc++.h>
#define a first
#define b second
#define oo 100000007
typedef long long ll;
using namespace std;


const int N =1e5 + 50;

int h , m, s, st, e , cnt;
int main()
{

    //freopen("in.txt","r" ,stdin);
    //freopen("output.txt" ,"w",stdout);
    ios::sync_with_stdio(false);

    cin >> h >> m >> s >> st >> e ;
    ++h;
    if(h > 12)
        h -= 12;
    m = m / 5;
    ++m;
    if(m > 12)
        m -= 12;
    s = s / 5 ;
    ++s;
    if(s > 12)
        s -= 12;

    for(int i = st + 1; ;++i){
        int j ;
        if(i > 12 )
            j = i - 12;
        else
            j = i ;
        if(j == h)
            ++cnt;
        if(j == m)
            ++cnt;
        if(j == s)
            ++cnt;
        if(j == e)
            break;

    }
    cout << (cnt == 0 || cnt == 3 ? "YES" : "NO");
     return 0;
}
