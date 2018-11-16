#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a;
    int i, n = 1, l;

    cin >> a;

    l = a.length();


    for(i=0; i<l-1 ; i++)
    {
        if(a[i] == a[i+1])
        {
            n++;
        if(n == 7)
        {
            break;
        }
        }

        else
        {
            n = 1;
        }
    }

    if(n >= 7)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
