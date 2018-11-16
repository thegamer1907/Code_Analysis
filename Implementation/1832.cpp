#include <bits/stdc++.h>
using namespace std;

#define F first
#define S second
typedef long long ll;
typedef long double ld;
typedef pair <int,int> ii;

int main()
{
    int n,a=0,b=0,c=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int x,y,z;
        scanf("%d%d%d",&x,&y,&z);
        a+=x;
        b+=y;
        c+=z;
    }
    if(a==0 && b==0 && c==0)
        printf("YES");
    else
        printf("NO");
}
