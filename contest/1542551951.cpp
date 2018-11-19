#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <cstring>
#include <string>

using namespace std;

string pass;
string s;
long a, b;
long n;

int main()
{
    cin >> pass;
    cin >> n;
    for (int i = 1; i <= n; i++) 
    {
        cin >> s;
        if (s == pass) a = b = 1;
        if (s[1] == pass[0]) a = 1;
        if (s[0] == pass[1]) b = 1;
    }
   
    if (a && b) cout << "YES";
    else cout << "NO";
    return 0;
}
