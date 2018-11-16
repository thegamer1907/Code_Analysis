#include <bits/stdc++.h>
using namespace std;
int freq[4];
int main()
{
    int x,y,z,sumx=0,sumy=0,sumz=0;
    int n;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d%d",&x,&y,&z);
        sumx+=x,sumy+=y,sumz+=z;
    }
    if(!sumx&&!sumy&&!sumz)
        printf("YES");
    else printf("NO");
}
