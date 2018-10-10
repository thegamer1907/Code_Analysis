#include <iostream>
#include <string>
#include <algorithm>
#include <set>
using namespace std;

int N, M;
set<string> A;
set<string> B;
set<string> C;

int main()
{
    ios::sync_with_stdio(0);

    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        string s;
        cin >> s;
        A.insert(s);
    }
    for (int i = 0; i < M; i++)
    {
        string s;
        cin >> s;
        B.insert(s);
        if (A.find(s) != A.end())
            C.insert(s);
    }

    int sz1 = A.size() - C.size();
    int sz2 = B.size() - C.size();
    if (C.size() % 2 == 1)
    {
        if (sz1 >= sz2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    else
    {
        if (sz1 > sz2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
