/* ***********************************************************************
    > File Name: codeforces.cpp
    > Author: Key
    > Mail: keyld777@gmail.com
    > Created Time: Sat 17 Jun 2017 10:27:02 PM CST
 ********************************************************************** */

#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    char tar[5], buf[110][5];
    int n;
    scanf("%s", tar);
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%s", buf[i]);
    bool flag = false;
    for (int i = 0; i < n && !flag; i++) {
        if (buf[i][0] == tar[0] && buf[i][1] == tar[1])
            flag = true;
        if (tar[0] == buf[i][1] && !flag) {
            for (int j = 0; j < n && !flag; j++) {
                if (tar[1] == buf[j][0])
                    flag = true;
            }
        }
    }
    puts(flag ? "YES" : "NO");
    return 0;
}
