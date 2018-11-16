#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n, t;
    string a, tmp;
    cin >> n >> t >> a;
    while (t > 0)
    {
        tmp = a;
        for (int i = 0; i < n; i++)
            if (a[i] == 'B' && a[i + 1] == 'G')
            {
                tmp[i] = 'G';
                tmp[i + 1] = 'B';
            }
        t--;
        a = tmp;
    }
    cout << a;
    return 0;
}