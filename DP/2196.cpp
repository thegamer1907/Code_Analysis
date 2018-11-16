#include <bits/stdc++.h>

using namespace std;

int cam[100001];
int main()
{
    int n,m,number;
    scanf("%d%d",&n,&m);
    set<int> num;
    int v[n+1];
    v[0]=1;
    for(int i=1;i<=n;i++)
          scanf("%d",&v[i]);

    for(int i=n;i>0;i--){
        num.insert(v[i]);
        v[i]=num.size();
    }

    for(int i=0;i<m;i++){
         scanf("%d",&number);
         printf("%d\n",v[number]);
    }

    return 0;
}