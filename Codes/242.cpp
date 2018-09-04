#include<cstdio>
#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<vector>
#include<map>
#include<queue>
#include<time.h>
#include<set>
#include<algorithm>
#include<sstream>

using namespace std;

typedef long long LL;

const int MAX = 100000 + 10;

int s[MAX] = {0};

int main()
{
    int n;
    scanf("%d", &n);
    scanf("%d", &s[0]);
    for(int i = 1; i < n; i++)
    {
        int temp;
        scanf("%d", &temp);
        s[i] = temp + s[i - 1];
    }
    int times;
    scanf("%d", &times);
    for(int i = 0; i < times; i++)
    {
        int x;
        scanf("%d", &x);
        int p = lower_bound(s, s + n, x) - s;
        printf("%d\n", p + 1);
    }
    return 0;
}
