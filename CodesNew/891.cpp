#include<iostream>
#include<set>
#include<string>

using namespace std;

int main()
{
    int n, m, cnt = 0;
    set<string> poland;
    set<string> enemy;

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        poland.insert(s);
    }
    for (int i = 0; i < m; i++)
    {
        string s;
        cin >> s;
        if (poland.count(s))
        {
            cnt++;
            poland.erase(s);
        }
        else enemy.insert(s);
    }
    if (cnt % 2 == 0)
    {
        if (poland.size() > enemy.size())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    else
    {
        if (poland.size() >= enemy.size())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
