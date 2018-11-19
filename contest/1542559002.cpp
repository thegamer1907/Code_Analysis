#include<bits/stdc++.h>
using namespace std;

int n, m, i, j, o, l, x, a[1000];
bool ttt(int x)
{
    for (int j=0;j<(1<<m);j++)
        if (a[j]>0&&(j&x)==0) return true;
   return false;
  /* int l=j
   if (a[j]>0) {cout<<j<<" "<<j&x<<endl;}*/
}
int main()
{
    cin>>n>>m;
    for (i=1;i<=n;i++)
    {
        o=0;
        for (j=1;j<=m;j++)
        {
            cin>>x;
            o=o*2+x;
        }
       // cout<<o<<endl;
        a[o]++;
        if (ttt(o)) {cout<<"YES";return 0;}
    }
    cout<<"NO";
}
