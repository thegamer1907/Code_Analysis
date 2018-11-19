#include <iostream>
using namespace std;
int main()
{
    int n, i, cn1 = 0, cn2 = 0;
    char a, b, ch1, ch2;

    cin >> a >> b;

    cin >> n;

    for(i = 0; i < n; ++i)
    {
        cin >> ch1 >> ch2;
        if(ch1 == a && ch2 == b)
        {
            cout << "YES";
            return 0;
        }
        if(ch1 == b)
            cn2++;
        if(ch2 == a)
            cn1++;
    }
    if(cn1 > 0 && cn2 > 0)
        cout << "YES";
    else
    cout << "NO";

return 0;
}
