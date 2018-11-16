#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int arr[10005];
int main()
{
    int tc;
    scanf("%d",&tc);
    int x=0,y=0,z=0;
    while(tc--)
    {
        scanf("%d %d %d",&arr[0],&arr[1],&arr[1]);
        x+=arr[0];
        y+=arr[1];
        z+=arr[2];
    }
    if(x==0 && y==0 && z==0)
    {
        printf("YES\n");
    }
    
    else
    {
        printf("NO\n");
    }
}