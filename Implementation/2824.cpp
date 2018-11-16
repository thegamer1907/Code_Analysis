#include<iostream>

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", n/2);
    for(int i=n/2-1;i;i--)
        printf("2 ");
    printf("%d\n", 2 + n%2);
}
