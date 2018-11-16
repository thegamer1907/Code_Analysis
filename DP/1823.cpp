#include <iostream>
#include <algorithm>
#include <cstdio>
#include <math.h>
#include <cstring>
#define ll long long

using namespace std;

int main()
{
    ll int i,j,count = 0,c=0,m,d=0,f=0,muf;
      char s[100005], *p;
    cin >> s;

    if ((p = strstr(s, "AB")) and strstr(p + 2, "BA")) cout << "YES" << endl;
    else if ((p = strstr(s, "BA")) and strstr(p + 2, "AB")) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}