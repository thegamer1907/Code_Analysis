#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    int m,k;
    cin>>n;
    cin>>m>>k;
   vector<long long int> v(m);
    int i;

    for(i=0;i<m;i++)
    {
       scanf("%lld",&v[i]);
    }
    int start=0;
    int j;
    long long int oper=0;
    long long int t=1;
    while(start!=m)
    {
        j=upper_bound(v.begin()+start,v.end(),k*t)-v.begin()-start;

    if(j!=0)
    {
        start+=j;
        oper++;}
    int f=-1;
    if(j!=0)
    {
        while(f!=0)
    {


            f=upper_bound(v.begin()+start,v.end(),v[start-1]+j+1)-v.begin()-start;
        start=start+f;

        if(f!=0)
            oper++;
    }

    }
    t++;
    }
   printf("%lld\n",oper);
    return 0;
}