#include <cstdio>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;
int n;
bool f0,f1;
string s,t;

int main()
{
    cin>>s>>n;
    while (n--)
        if (cin>>t,f0|=s[0]==t[1],f1|=s[1]==t[0],t==s || (f0 && f1))
            return puts("YES"),0;
    puts("NO");
    return 0;
}
