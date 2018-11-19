#include <bits/stdc++.h>
using namespace std;

int n;
bool v1, v2;
string a;
int main()
{
    cin >> a >> n;
    for(int i = 0; i < n; i++){
        char x, y;
        string cur;
        cin >> x >> y;
        cur += x;
        cur += y;
        if(cur == a){
            v1 = 1;
            v2 = 1;
        }
        if(x == a[1])
            v1 = 1;
        if(y == a[0])
            v2 = 1;
    }
    if(v1 && v2)
        cout << "YES";
    else
        cout << "NO";
}
