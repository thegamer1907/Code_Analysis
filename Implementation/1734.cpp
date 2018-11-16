#include<iostream>
using namespace std;

string s;
int i,d,e;

int main()
{
    cin >> s;

    d = 0;
    e = 0;
    for (i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
        {
            d++;
            e = 0;
        }
        else
        {
            d = 0;
            e++;
        }

        if (d == 7 || e == 7)
        {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
}
