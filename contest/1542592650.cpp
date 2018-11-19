#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <map>
#include <set>
#include <vector>
#include <cmath>
#include <string>
using namespace std;
#define LL long long

string a;
int n;
string s[105];

int main()
{
    while(cin >> a)
    {
        scanf("%d", &n);
        int flag = 0;
        for(int i = 0; i < n; ++i)
        {
            cin >> s[i];
            if(s[i] == a) flag = 1;
        }
        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < n; ++j)
            {
                string temp;
                temp = s[i][1];
                temp += s[j][0];
                if(temp == a) flag = 1;
            }
        }
        if(flag) printf("YES\n");
        else printf("NO\n");
    }
}
