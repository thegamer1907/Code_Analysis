#include <bits/stdc++.h>

using namespace std;

int main (void)
{
    char a[6] = {0}, b[3], c[3];
    char words[101][3];
    int n;

    scanf ("%s", b);
    scanf ("%d", &n);

    for (int i = 0; i < n; i++)
        scanf ("%s", words[i]);

    bool ok = false;
    for (int i = 0; !ok and i < n; i++)
        for (int j = 0; !ok and j < n; j++)
        {
            a[0] = '\0';
            strcat(a, words[i]);
            strcat(a, words[j]);

            ok =  strstr(a, b) != NULL;
        }

    puts (ok ? "YES" : "NO");

    return 0;
}

// 1509241557793
