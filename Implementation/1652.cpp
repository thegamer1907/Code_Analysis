#include <iostream>
#include <string>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    int i , dem = 0 , dem1 = 0 , a = 0 , b = 0;
    getline(cin , s);
    for (i = 0; i <= (int)s.length(); i++)
    {
        if (s[i] == '0')
        {
            dem++;
            dem1 = 0;
        }
        else
        {
            dem1++;
            dem = 0;
        }
        if (dem > a) a = dem;
        if (dem1 > b) b = dem1;
    }
    if (a >= 7 || b >= 7) cout << "YES";
    else cout << "NO";
}
