#include <iostream>
#include <cstring>
using namespace std;

int main ()
{
    char s[3], s1[3];
    int n, i, ck = 0, ck1 = 0, ck2 = 0;
    cin >> s >> n;
    for(i = 0; i < n; i++)
    {
        cin >> s1;
        if(strcmp(s, s1) == 0)
        {
            ck = 1;
        }
        else if((s[0] == s1[1]) && (s[1] == s1[0]))
        {
            ck = 1;
        }
        else if(s[0] == s1[1])
        {
            ck1 = 1;
        }
        else if(s[1] == s1[0])
        {
            ck2 = 1;
        }
    }

    if((ck == 1) || ((ck1 == 1) && (ck2 == 1)))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}