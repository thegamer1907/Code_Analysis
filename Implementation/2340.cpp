#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    string str;

    while (cin >> str)
    {
        int ans = 0;

        for (int i = 0; i < str.size(); i++)
            if (str[i]=='4'||str[i]=='7')
                ans++;
        printf("%s\n", (ans==4||ans==7)?"YES":"NO");
    }


    return 0;
}