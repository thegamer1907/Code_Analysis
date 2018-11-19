#include<iostream>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<stdio.h>
#include<utility>
#include<algorithm>
#include<map>
#include<stack>
#include<set>
#include<queue>
using namespace std;
typedef long long ll;
const int maxn = 1000;
const int mod = 1e9+7;
const int Hash = 10000;
const int INF = 1<<30;
const ll llINF = 1e18+999;

int h,m,s,t1,t2;
double arr[3];
int main( )
{
    //freopen("input.txt", "r", stdin);
    while(~scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2))
    {
        arr[2] = s;
        arr[1] = m+1.0*s/60;
        arr[0] = (h+arr[1]/60)*5;
        t1 *= 5;
        t2 *= 5;
        if(t1 > t2)
            swap(t1, t2);
        int flag = 0;
        sort(arr, arr+3);
        if(t1>arr[0] && t2<arr[1])
            flag = 1;
        if(t1>arr[1] && t2<arr[2])
            flag = 1;
        if(t1>arr[2] || t2<arr[0])
            flag = 1;
        if(t1<arr[0] && t2>arr[2])
            flag = 1;
        if(flag)
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}
