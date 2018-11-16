#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b;
    scanf("%d%d%d", &n, &a, &b);

    vector < int > sp;
    for (int i = 0; i < n; i++)
        sp.push_back(i + 1);

    int ans = 0;
    while (sp.size() != 2)
    {
        ans++;
        for (int i = 0; i < sp.size(); i += 2)
            if ((sp[i] == a && sp[i + 1] == b) || (sp[i] == b && sp[i + 1] == a))
            {
                printf("%d", ans);
                return 0;
            }

        vector < int > new_sp;
        for (int i = 0; i < sp.size(); i += 2)
        {
            if (sp[i] == a) {new_sp.push_back(a); continue;}
            if (sp[i] == b) {new_sp.push_back(b); continue;}
            if (sp[i + 1] == a) {new_sp.push_back(a); continue;}
            if (sp[i + 1] == b) {new_sp.push_back(b); continue;}
            new_sp.push_back(sp[i]);
        }

        sp = new_sp;
    }
    printf("Final!");
    return 0;
}
