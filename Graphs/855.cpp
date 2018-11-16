#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b;
    vector<int>v;
    scanf("%d %d",&n,&a);
    for(int j=0;j<(n-1);j++)
    {
        scanf("%d",&b);
        v.push_back(b);
       // printf("%d",v[j]);
    }
    for(int i=0;i<n-1;)
    {
        i+=v[i];
        if(i==a-1){printf("YES");break;}
        if(i>a-1){printf("NO");break;}
    }
    return 0;
}
