#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int n;
    char pas[3];
    char str[3];
    int i = 0;
    int a = 0;
    cin >> pas;
    cin >> n;
    string *zv = new string[n];
    str[2] = '\0';
    for(i = 0; i < n; i++)
        {
            cin >> zv[i];
            if(zv[i] == pas)
            {
                cout << "YES";
                return 0;
            }
        }
    for(i = 0; i < n; i++)
        {
            str[0] = zv[i][1];
            for(a = 0; a < n; a++)
            {
                str[1] = zv[a][0];
                if(stricmp(str, pas) == 0)
                    {
                        cout << "YES";
                        return 0;
                    }
                str[1] = 0;
            }
            str[0] = 0;
        }
        cout << "NO";
        return 0;
}
