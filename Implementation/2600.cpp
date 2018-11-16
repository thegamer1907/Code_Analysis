#include<iostream>

int main()
{
    int n, h, cnt = 0;
    scanf("%d %d", &n, &h);
    for(int i=0, a;i<n;i++)
        scanf("%d", &a),    cnt += a > h ? 2 : 1;
    printf("%d\n", cnt);
}
