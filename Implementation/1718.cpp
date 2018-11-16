#include <bits/stdc++.h>

using namespace std;

int main()
{
    char S[101];

    scanf("%s", &S);
    int len = strlen(S), danger = 0;
    bool dangerous = false;
    char before;

    for (int i = 0; i < len; i++)
    {
        if (i == 0) { before = S[i]; danger++; continue; }
        if (S[i] == before) danger++;
        else
        {
            before = S[i];
            danger = 1;
        }

        if (danger == 7) { dangerous = true; break; }
    }

    if (!dangerous) printf("NO\n");
    else printf("YES\n");
}
