#include<cstdio>
#include<iostream>
#include<algorithm>

using namespace std;
int n,a[1000000+100],m,b[1000000+100],sol;
string s;
int main()
{
    scanf("%d %d",&n,&m);
    for (int i =1;i<=n;i++)scanf("%d",&a[i]);
    for (int i = 1;i<=m;i++)scanf("%d",&b[i]);
    sort(b+1,b+m+1);
    int pok = m;
    for (int i = 1;i<=n;i++)
    {
        if (a[i]==0)a[i] = b[pok--];
    }
  //  for (int i = 1;i<=n;i++)cout<<a[i]<<" ";cout<<endl;
    for (int i =2;i<=n;i++)
    {
        if (a[i]<=a[i-1]){cout<<"Yes"<<endl;return 0;}
    }
    cout<<"No"<<endl;
    return 0;
}
