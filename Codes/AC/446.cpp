#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

int k,num;

bool check(int x)
{
    int res = 0;
    while (x)
    {
        res += x % 10;
        x /= 10;
    }
    return res == 10;
}

int main()
{
    scanf("%d",&k);
    for (int i = 19;;i++)
    {
        if (check(i))
            num++;
        if (num == k)
        {
            printf("%d\n",i);
            break;
        }
    }

    return 0;
}



