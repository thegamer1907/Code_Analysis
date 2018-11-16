#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,c,i = 0,j = 0,k = 0;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%d %d %d", &a, &b, &c);
        i+= a;
        j+=b;
        k+=c;
    }
    if(i == 0 && j == 0 && k == 0)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
