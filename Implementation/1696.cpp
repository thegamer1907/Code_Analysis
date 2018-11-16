#include <iostream>

using namespace std;

int main()
{
    string s;
    int k = 1;
    cin >> s;
    int n, n1 = s[0];
    for (int i = 1; i < s.size(); i++)
    {
        n = s[i];
        if (n == n1)
        {
            k++;
            if (k == 7)
            {
                cout << "YES";
                return 0;
            }
        }
        else
        {
            n1 = n;
            k = 1;
        }
    }
    cout << "NO";
    return 0;
}
