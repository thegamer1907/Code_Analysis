#include <bits/stdc++.h>
using namespace std;


struct node{
    int val,id;
    node(){}
    node(int v,int i)
    {
        val = v;
        id = i;
    }
};
int n,m;
int arr[120000];
node brr[120000];
int t;



bool cmpval(node& a,node& b)
{
    return a.val<b.val;
}

bool cmpid(node& a,node& b)
{
    return a.id<b.id;
}

int main()
{
    int sum = 0;
    scanf("%d",&n);
    for (int i = 1 ; i <= n ; i ++)
        scanf("%d",&arr[i]);
    scanf("%d",&m);
    for (int i =1  ;i <= m ; i ++)
    {
        scanf("%d",&t);
        brr[i] = node(t,i);
    } 
    sort(brr+1,brr+m+1,cmpval);
    int now = 0;
    for (int i = 1 ; i <= m; i ++)
    {
        while (sum<brr[i].val)
        {
            now++;
            sum += arr[now];
        }
        brr[i].val = now;
    }
    sort(brr+1,brr+m+1,cmpid);

    for (int i =1 ; i <= m ; i ++)
    {
        printf("%d\n",brr[i].val);
    }
    return 0;
}
