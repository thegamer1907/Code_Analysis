#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> a;

int main()
{
    int n;
    bool l1 = 0, l2 = 0, l3 = 0, l4 = 0;
    string p, b;
    cin >> p;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> b;
        a.push_back(b);
    }

    if(find(a.begin(), a.end(), p) != a.end())
        cout << "YES";

    else
    {
        for(int i = 0; i < n; i++)
        {
            if(a[i][0] == p[1])
                l1++;
            if(a[i][1] == p[0])
                l2++;
        }

        if(l1 && l2)
            cout << "YES";
        else
            cout << "NO";
    }
}