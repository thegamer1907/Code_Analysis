#include<iostream>

bool testTen(int val)
{
    int ret = 0;
    while(val)
    {
        ret += val%10;
        val /= 10;
    }
    return ret == 10;
}

int permutate(int idx)
{
    int cur = 0;
    for(int i=19;i;i++)
    {
        if(testTen(i))
            cur++;
        if(cur == idx)
            return i;
    }
    return -1;
}

int main()
{
    int val;
    scanf("%d", &val);
    printf("%d\n", permutate(val));
}
