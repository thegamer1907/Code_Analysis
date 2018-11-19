#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
#include<iostream>

using namespace std;
int n;
char ob[10];
char tmp[10];

int main()
{

    scanf("%s",ob);
    scanf("%d",&n);
    bool flag = false;
    bool l = false, r = false;
    for( int i = 0; i < n ;i++)
    {
        scanf("%s",tmp);
        if( tmp[0] == ob[0] && tmp[1] == ob[1])
            flag = true;
        if( tmp[0] == ob[1])
            r = true;
        if( tmp[1] == ob[0])
            l = true;
    }

    if( flag || ( l && r))
        puts("YES");
    else
        puts("NO");
    
    return 0;
}
