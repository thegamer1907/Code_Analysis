#include <iostream>

using namespace std;

int main()
{
    char c = 0, last;
    int combo;
    while(last = c, cin.get(c), c != '\n')
    {
        if(c == last)
            combo++;
        else
            combo = 1;
        if(combo == 7)
        {
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
}