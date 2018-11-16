#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    unordered_set<int> s;
    scanf("%d%d",&n,&m);
    int arr[n],x;
    for(int i = 0; i < n ; i++)
        scanf("%d",&arr[i]);

    for(int i = n-1; i >= 0 ; i--)
    {
      s.insert(arr[i]);
      arr[i]=s.size();
    }
    for(int i = 0; i < m ; i++)
    {
            scanf("%d",&x);
            printf("%d\n",arr[x-1] );
    }
    return 0;
}
