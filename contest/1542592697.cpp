#include <bits/stdc++.h>
using namespace std;
const int maxn=1e5+5;
int a[30];
int b[30];
int main()
{
    int n, i, j;
    char str[5];
    scanf("%s", str);
    cin>>n;
    char key[5];
    for(i=0; i<n; i++)
    {
        scanf("%s", key);
        if(strcmp(key, str)==0)return 0*printf("YES\n");
        a[key[0]-'a']++;
        b[key[1]-'a']++;
    }
    if(b[str[0]-'a'] && a[str[1]-'a'])printf("YES\n");
    else printf("NO\n");

}
