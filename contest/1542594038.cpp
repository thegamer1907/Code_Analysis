#include <bits/stdc++.h>

using namespace std;

typedef long long int64;

string a;
string b;
int main()
{
    #ifdef HOME
        freopen("input.txt", "rt", stdin);
    #endif // HOME
    cin >> a;
    int n;
    char c = a[0];
    char d = a[1];
    bool a1 = false;
    bool a2 = false;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> b;
        if (b[0] == d)
            a1 = true;
        if (b[1] == c)
            a2 = true;
        if (b == a){
            cout << "YES";
            return 0;
        }
    }
    if (a1 && a2)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
