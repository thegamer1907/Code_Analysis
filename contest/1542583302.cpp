#include<iostream>

using namespace std;

int main()
{
    bool a=0,b=0;
    char p[3];
    cin >> p;
    int n;
    cin >> n;
    while(n--)
    {
        char k[3];
        cin >> k;
        if(k[0]==p[0]&&k[1]==p[1])
        {
            cout << "YES";
            return 0;
        }
        if(k[0]==p[1])
            a = 1;
        if(k[1]==p[0])
            b = 1;
    }
    if(a&&b)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}