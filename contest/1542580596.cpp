#include <cstdio>
#include <cstring>

bool aa[30], bb[30];

int main(void) {
    char a, b, ta, tb, g;
    int n;
    scanf("%c%c", &a, &b);
    memset(aa, false, sizeof(aa));
    memset(bb, false, sizeof(bb));
    bool flag = false;
    scanf("%d%c", &n, &g);
    for(int i = 0; i < n; i++) {
        scanf("%c%c%c", &ta, &tb, &g);
        // printf("%c%c\n",ta,tb);
        if((ta == a && b == tb) || (ta == b && tb ==a)) flag = true; 
        else {
            aa[tb - 'a'] = true;
            bb[ta - 'a'] = true;
            for(int j = 0; j < 26; j++) {
                if(aa[j]) {
                    if('a' + j == a && ta == b)
                        flag = true;
                }
                if(bb[j]) {
                    if('a' + j == b && tb == a)
                        flag = true;
                }
            }
        }
    }
    printf("%s\n", flag ? "YES":"NO");
    return 0;
}