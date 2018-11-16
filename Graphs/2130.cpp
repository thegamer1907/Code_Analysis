/*jai mata di
let's rock*/
#include<bits/stdc++.h>
using namespace std;
const int N=10004;
int a;
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    while(n<m)
    {
        (m%2)?m++:m/=2,a++;
    }
    printf("%d\n",a+n-m);
    return 0;
}
