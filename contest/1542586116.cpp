// LNU_Algotesters

#include <iostream>
#include <sstream>
#include <iomanip>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cctype>
#include <cstring>
#include <vector>
#include <list>
#include <queue>
#include <deque>
#include <stack>
#include <map>
#include <set>
#include <algorithm>
#include <iterator>
#include <bitset>
#include <ctime>
#include <fstream>
#include <complex>

using namespace std;
#define FOR(i,a,b) for(int i = (a); i <(b); i++)
#define RFOR(i,b,a) for(int i = (b) - 1; i >= (a); i--)
#define ITER(it,a) for(typeof(a.begin()) it = a.begin(); it != a.end(); it++)
#define FILL(a, value) memset(a,value, sizeof(a))

#define ALL(a) a.begin(),a.end()
#define SZ(a) (int)a.size()
#define PB push_back
#define MP make_pair

typedef long long LL;
typedef vector<LL> VI;
typedef pair<int, int> PII;

const double PI = acos(-1.0);
const int INF = 1000 * 1000 * 1000 + 7;
const LL LINF = INF * (LL)INF;

const int MAX = 2222;

string s[MAX];

int main()
{
    //freopen("input.txt", "r", stdin);
    //ios::sync_with_stdio(false); cin.tie(0);
    int h, m, s, t1, t2;
    cin >> h >> m >> s >> t1 >> t2;
    h %= 12;
    t1 %= 12;
    t2 %= 12;
    
    //(60 * m + s) / (60 * 59 )
    
    int hh = 60 * 60 * h + 60 * m + s;
    int mm = (60 * m + s) * (60 * 60 * 11 + 60 * 59 + 59 + 1) / (60 * 59 + 59 + 1);
    int ss = s * (60 * 60 * 11 + 60 * 59 + 59 + 1) / (60);
    //cout << 60 * 60 * 11 + 60 * 59 + 59 << endl;;
    
    // cout << 60 * 60 * t1 << " " << 60 * 60 * t2 << " "<< hh <<" "<< mm <<" "<< ss <<" "<< 60 * 60 * 11 + 60 * 59 + 59 + 1 << endl;
    
    
    
    int i = 60 * 60 * t1;
    
    while(true)
    {
        if (i == 60 * 60 * t2)
        {
            cout << "YES" << endl;
            return 0;
        }
        i++;
        if (i >= 43200)i -= 43200;
        if (i == hh)break;
        if (i == ss)break;
        if (i == mm)break;
    }
   
    i = t1 * 60 * 60;
    while(true)
    {
        if (i == 60 * 60 * t2)
        {
            cout << "YES" << endl;
            return 0;
        }
        i--;
        if (i < 0)i += 43200;
        if (i == hh)break;
        if (i == ss)break;
        if (i == mm)break;
    }
    cout << "NO" << endl;

    return 0;
}

