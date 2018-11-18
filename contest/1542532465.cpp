#include <cstdio>
#include <cctype>

using namespace std;
constexpr int N = 105;

char words[N][2];

bool iequal(char a, char b)
{
    return tolower(a) == tolower(b);
}

int main()
{
    char word[2];
    scanf(" %c%c", &word[0], &word[1]);
    
    int n;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++)
        scanf(" %c%c", &words[i][0], &words[i][1]);
        
    bool is = false;
    for (int i = 0; i < n; i++)
        if (iequal(words[i][0], word[0]) && iequal(words[i][1], word[1]))
        {
            is = true;
            goto end;
        }
        
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (iequal(words[i][0], word[1]) && iequal(words[j][1], word[0]))
            {
                is = true;
                goto end;
            }
        
end:
    puts(is ? "YES" : "NO");
}
