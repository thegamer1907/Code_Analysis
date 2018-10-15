#include <iostream>
#include <cstdio>
#include <string>
typedef long long ll;
using namespace std;
string c[500007], s;
bool b;
int n;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i=0; i<n; ++i)
    {
        cin >> c[i];
    }
    for (int i=n-1; i>=1; --i)
    {
        b=1;
        int g=c[i].size();
        for (int j=0; j<g; ++j)
        {
            if (c[i][j]>c[i-1][j])
            {
                b=0;
                break;
            }
            if (c[i][j]<c[i-1][j])
            {
                b=0;
                c[i-1]=c[i-1].substr(0, j);
                break;
            }
        }

        if (b) c[i-1]=c[i-1].substr(0, g);

    }
    for (int i=0; i<n; ++i)
    {
        cout << c[i] << '\n';
    }
    return 0;
}




