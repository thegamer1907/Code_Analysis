#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s[101];
    cin >> s;
    char*p;
    char*q;
    p = strstr(s,"1111111");
    q = strstr(s,"0000000");
    if(p||q)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
