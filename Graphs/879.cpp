#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,n,t,a[100005],sum=0;

    scanf("%d %d",&n,&t);

    for(i = 0;i < n-1;i++){
        scanf("%d", &a[i]);
    }


    for(i = 1;i <= n-1;i++){
        sum = i + a[i-1];
        if(t==sum){
            printf("YES\n");
            return 0;
        }
        i = sum - 1;
    }

    printf("NO\n");

    return 0;
}
