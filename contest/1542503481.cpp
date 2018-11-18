#include <bits/stdc++.h>
#define ll long long
#define ii pair<int, int>
#define ip pair<int, ii>
using namespace std;
const int N = 1e5 + 7, M = 1e2 + 7;




void solve (int t)
{

}

bool x, y;


int main ()
{
    #ifndef ONLINE_JUDGE
        //freopen("i.txt", "r", stdin);
    #endif

    string in;
    cin >> in;

    int n;
    cin >> n;


    bool ans = false;

    for(int i=1; i<=n; i++)
    {
        string tmp;
        cin >> tmp;
        if(tmp==in)ans = true;

        if(in[0]==tmp[1])x = true;
        if(in[1]==tmp[0])y = true;

        if(in[1]==tmp[0] && in[0]==tmp[1])ans = true;
    }

    if(ans || (x & y))cout << "YES" << endl;
    else cout << "NO" << endl;
}
