#include<bits/stdc++.h>
using namespace std;
int s[1000005];
int main()
{
    int n;
    scanf("%d",&n);
    int sum=0,res=0;
    for(int i=0;i<n;i++){
        scanf("%d",&s[i]);
        res=max(res,s[i]);
    }
    for(int i=0;i<n;i++){
        sum+=res-s[i];
    }
    printf("%d\n",sum);
    return 0;
}
