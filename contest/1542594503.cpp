#include <bits/stdc++.h>
#define OO 1e9
#define ll long long
using namespace std;

int main()
{
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    string p;
    cin >> p;
    int n;
    cin >> n;
    bool st, en;
    st = en = 0;
    bool can;
    can = 0;

    string x;

    for(int i = 0;i < n;i++){
        cin >> x;
        if(x == p){
                can = true;
            break;
        }
        if(x[0] == p[1])en = 1;
        if(x[1] == p[0])st = 1;
    }
    if(en && st || can)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
