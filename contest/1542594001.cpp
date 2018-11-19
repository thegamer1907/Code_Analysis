
#include<bits/stdc++.h>
using namespace std;
#define D(x)    cout << #x " = " <<(x) << endl
#define MAX     100000
typedef long long int LL;

char p[5], str[5];


int main()
{
    int i, n;
    bool flag = false, f1 = false, f2 = false;

    scanf("%s", p);
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        scanf("%s", str);
        if(!strcmp(str, p)) flag = true;
        if(str[1] == p[0]) f1 = true;
        if(str[0] == p[1]) f2 = true;
    }

    if(flag || (f1 && f2)) puts("YES");
    else puts("NO");

    return 0;
}

