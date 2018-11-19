#include<iostream>
#include<cstdint>
#include<map>
#include<set>
#include<vector>
#include<algorithm>

#define ll long long

using namespace std;

int main()
{
    char c, d, e;
    int n;
    bool first = false, second = false;
    cin >> c >> d >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> e;
        if(e == c)
        {
            if(e == d)
                second = true;
            cin >> e;
            if(e == d)
            {
                first = true;
                second = true;
            }
            else if(e == c)
                first = true;
        }
        else
        {
            if(e == d)
                second = true;
            cin >> e;
            if(e == c)
                first = true;
        }
    }
    if(first && second)
        cout << "YES";
    else
        cout << "NO";
    cout << "\n";
    return 0;
}

