#include<iostream>

int main()
{
    int n, m, c, cnt = 0;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d", &m, &c),
        cnt += (m>c ? 1 : (m==c ? 0 : -1));
    }
    if(cnt > 0)
        printf("Mishka\n");
    else if(cnt == 0)
        printf("Friendship is magic!^^\n");
    else
        printf("Chris\n");
}
