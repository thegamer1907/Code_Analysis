#include<bits/stdc++.h>
using namespace std;
#define MAX 100

int main()
{
    int n,k,a[MAX],i;
    for(int i = 0;i < MAX;i++) a[i] = 0;
    scanf("%d%d",&n,&k);
    for(i = 0;i < n;i++) scanf("%d",&a[i]);
    for(i = 0;i < n;i++)
    {
        if(a[k - 1] > a[i]) break;
        if(!a[i]) break;
    }
    cout << i << endl;
    return 0;
}