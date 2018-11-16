#include <bits/stdc++.h>
using namespace std;
char str[1005];
int main() {
    gets(str);
    int len = strlen(str);
    set<string> s;
    int i = 1;
    while (i < len) {
        string tmp;
        while (str[i] != ',' && str[i] != '}') {
            if (str[i] != ' ') tmp.push_back(str[i]);
            i++;
        }
        i++;
        if (tmp.size()) s.insert(tmp);
    }
    printf("%d\n", s.size());
    return 0;
}