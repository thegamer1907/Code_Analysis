#include <bits/stdc++.h>
using namespace std;

string s;
int const N = 100000;
int n = 0, ab[N],
    m = 0, ba[N];

int main()
{
    //fstream input("input.txt"); cin.rdbuf(input.rdbuf());
    getline(cin, s);

    for (int i = 0; i < s.length() - 1; i++)
    {
        if (s[i] == 'A' && s[i + 1] == 'B')
        {
            ab[n++] = i;
        }
        else if (s[i] == 'B' && s[i + 1] == 'A')
        {
            ba[m++] = i;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (abs(ab[i] - ba[j]) >= 2) {
                cout << "YES" << endl;
                return 0;
            }
        }
    }

    cout << "NO" << endl;
}