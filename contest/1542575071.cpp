#include <iostream>
#include <string>
#include <algorithm>
#define NMax 101
#define f cin
#define g cout
using namespace std;

int n;
string s[NMax], pass;

int main()
{
    f >> pass;
    f >> n;
    for(int i = 0; i < n; ++i)
        f >> s[i];
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < n; ++j)
            if((s[i] + s[j]).find(pass) != string::npos)
            {
                g << "YES" << '\n';
                return 0;
            }
    g << "NO" << '\n';
    return 0;
}
