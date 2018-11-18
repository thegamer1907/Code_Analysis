#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int h,m,s,ti,tj,i,j;
    cin>>h>>m>>s>>ti>>tj;
    int a[65];
    for(i=1;i<=60;i++)
    a[i]=0;
    h=h*5;
    if(m>0||s>0)
    h++;
    h=h%60;
    a[h]++;
    if(s>0)
    m++;
    m=m%60;
    if(m==0)
    m=60;
    if(s==0)
    s=60;
    a[m]++;
    a[s]++;
    ti=ti*5;
    tj=tj*5;
    if(ti>tj)
    swap(ti,tj);
    int count=0;
    for(i=ti+1;i<=tj;i++)
    {
        count+=a[i];
    }
    if(count==0||count==3)
    cout<<"YES"<<"\n";
    else
    cout<<"NO"<<"\n";
}