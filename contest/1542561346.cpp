#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string s1;
    cin >> s1;
    int n;
    cin >> n;
    vector <string> v(n);
    bool b = false;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] == s1)
            b = true;
    }
    if (b)
        cout << "YES";
    else
    {
        int k = 0, k1 = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i][1] == s1[0])
                k++;
            if (v[i][0] == s1[1])
                k1++;
        }
        if (k && k1)
            cout << "YES";
        else
            cout << "NO";
    }
}
