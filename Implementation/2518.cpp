#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef double DB;
typedef pair<int,  int> PI;
typedef pair<int, PI> PIP;
const int INF = 1e9 + 7;
#define cin(n)({int neg=0; n=0;char ch;for(ch=getchar();ch<'0'||ch>'9';ch=getchar())if(ch=='-')neg=1-neg;n=ch-48;for(ch=getchar();ch>='0'&&ch<='9';ch=getchar())n=(n<<3)+(n<<1)+ch-48;if(neg)n=-n;})
#define FOR(i, a, b) for(int i = a; i <= b;i++)
#define ROF(i, a, b) for(int i = a; i >= b;i--)
#define VEC(i, a) for(auto &i:a)
#define reset(d, a) memset(d, a, sizeof(d))
#define pb push_back
#define X first
#define Y second
#define Y1 second.first
#define Y2 second.second
#define _ << " " <<
#define g s[i] == 
string s;
main()
{
    cin >> s;
    FOR(i, 0, s.size() - 1)
    {
        if(g 'H' || g 'Q' || g '9' ) {cout<<"YES"; return 0;}
    }
    cout << "NO";
}