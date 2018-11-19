#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
    int n, i, inits[26], ends[26];
    char password[3], words[100][3];
    bool can;

    can = false;
    memset(inits, 0, 4 * 26);
    memset(ends, 0, 4 * 26);
    scanf("%s%d", password, &n);
    for(i = 0; i < n; ++i){
        scanf("%s", words[i]);
        ++inits[words[i][0] - 'a'];
        ++ends[words[i][1] - 'a'];
        if(strcmp(words[i], password) == 0){
            can = true;
            break;
        }
    }
    printf((can || (ends[password[0] - 'a'] && inits[password[1] - 'a'])) ? "YES" : "NO");

    return 0;
}