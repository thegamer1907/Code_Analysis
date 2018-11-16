#include <iostream>
using namespace std;

//http://codeforces.com/problemset/problem/500/A
int main()
{
    int x, y;
    cin >> x >> y;
    int board[50000];
    for (int i = 1; i < x; i++)
    {
        cin >> board[i];
    }

    bool cango = false;

    for (int i = 1; i < x;)
    {
        if (i + board[i] == y)
        {
            cango = true;
            i = board[i];
            break;
        }
        else if (i + board[i] > y)
        {
            break;
        }
        else
        {
            cango = false;
            i = i + board[i];
        }
    }
    if (cango)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}