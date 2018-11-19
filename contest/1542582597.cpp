#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    char a, b, arr[105][5];
    int n , i, flag = 0;
    a = getchar();
    b = getchar();
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        scanf("%s", arr[i]);
        if(arr[i][0] == a && arr[i][1] == b)
            flag = 1;
    }
    if(flag == 1) printf("YES\n");
    else
    {
        int x = 0, y = 0;
        for(i = 1; i <= n; i++)
        {
            if(arr[i][1] == a) x = 1;
            if(arr[i][0] == b) y = 1;
        }
        if(x + y == 2) printf("YES\n");
        else printf("NO\n");
    }
    return 0;

}
