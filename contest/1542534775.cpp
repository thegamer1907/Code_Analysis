#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <vector>
#include <queue>
#include <map>
using namespace std;

int n;
bool flag = false;
string s,a[101];

int main()
{
    cin>>s>>n;
    for(int i = 0;i < n;i ++)
        cin>>a[i];
    for(int i = 0;i < n;i ++)
    {
        if(s == a[i]) flag = true;
        for(int j = i;j < n;j ++)
        {
            if(s[0] == a[i][1] && s[1] == a[j][0]) flag = true;
            if(s[0] == a[j][1] && s[1] == a[i][0]) flag = true;
        } 
    }
    if(flag) printf("YES\n");
    else printf("NO\n");
    return 0;
}