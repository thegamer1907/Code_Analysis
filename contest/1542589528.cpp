#include <bits/stdc++.h>

using namespace std;

int main ()
{
    string data;
    cin >> data;

    int n;
    cin >> n;

    bool first = false, second = false;

    for (int i = 0; i < n; i++)
    {
        string current;
        cin >> current;

        if (current[0] == data[1])
            second = true;

        if (current[1] == data[0])
            first = true;

        if (current == data)
        {
            first = true;
            second = true;
        }
    }

    if (first && second)
        std::cout << "YES";

    else
        std::cout << "NO";

    return 0;
}
