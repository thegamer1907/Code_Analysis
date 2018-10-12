/*============================================================================**
*	Filename: main.cpp
*	Author:	  Akasaka
*	Date:     2018/04/
*	Remarks:
**============================================================================*/

#define Akasaka

#ifdef Akasaka
#define DebugIN(x)  freopen(x, "r", stdin)
#define DebugOUT(x) freopen(x, "w", stdout)
#define IN  "in.txt"
#define OUT "out.txt"
#define CLOSE   "CON"   ///close in/out.txt
#define CPP ios_base::sync_with_stdio(false),   cin.tie(0), cout.tie(0);
#endif // Akasaka


#include <bits/stdc++.h>

#include <string>

using namespace std;

typedef long long ll;
const int _max = 1e3 + 10;

string po[_max], en[_max];
int n, m;

int main()
{
    CPP;
    cin >> n >> m;
    for(int i = 0; i < n; i++) cin >> po[i];
    sort(po, po + n);
    int same = 0;
    for(int i = 0; i < m; i++)
    {
        cin >> en[i];
        if(*lower_bound(po, po + n, en[i]) == en[i]) same++;
    }
    cout << (n + (same & 1) > m ? "YES" : "NO");
    return 0;
}

/*============================================================================**
*       #include <ctime>                                                       *
*       clock_t TIME_START, TIME_END;                                          *
*       TIME_STRAT = clock();                                                  *
*       code balabalba                                                         *
*       TIME_END = clock();                                                    *
*       printf("%d/%d",TIME_END - TIME_START,CLOCKS_PER_SEC);                  *
**============================================================================*/

