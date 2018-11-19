#include <iostream>

using namespace std;

int main()
{
    string pas;
    cin >> pas;
    int n;
    cin >> n;
    bool st = false , nd = false;
    while(n--)
    {
        string a;
        cin >> a;
        if(a == pas)
            st = nd = true;
        if(pas[0] == a[1])
            st = true;
        if(pas[1] == a[0])
            nd = true;
    }
    if(st && nd)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
