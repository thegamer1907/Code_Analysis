#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>

using namespace std;
int main ()
{
    int n;
    cin>>n;
    int a[n+1],b[n+1];
    a[0]=0;
    b[0]=0;
    for (int i=1;i<=n;i++)
    cin>>a[i];
    for (int i=1;i<=n;i++)
    b[a[i]]=i;
    for (int i=1;i<=n;i++)
    cout<<b[i]<<" ";
    return 0;
}
