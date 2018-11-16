#include<iostream>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    for(int i=n;i>=0;i--)
        if((1+i) * i / 2 * 5 + k <= 240)
        {
            printf("%d\n", i);
            return 0;
        }
}
