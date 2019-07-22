#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    long long int m,k;
    cin>>n;
    cin>>m>>k;
   vector<long long int> v(m);
    long long int i;

    for(i=0;i<m;i++)
    {
       scanf("%lld",&v[i]);
    }
    long long int start=0;
   long long int j=start;
    long long int oper=0;
    long long int t=1;
    i=0;
    while(i<m)
    {
        t=ceil((long double)(v[i]-start)/k)*k;
        if(i+1<m&&v[i+1]-start<=t)
        {
            i++;
        }
        else if(i+1<m&&v[i+1]-start>t)
        {
            start=i+1;
            oper++;
            //cout<<"oper at i="<<i<<" "<<start<<endl;
            i++;
            int flag=0;
            while(!flag)
            {
                flag=1;
            while(i<m&&v[i]-start<=t)
            {
                i++;
                flag=0;
            }
            if(!flag)
            {j=start;
            start=i;
            oper++;
                       //cout<<"oper at i="<<i-1<<" "<<start<<endl;
                       }
            }

        }
        else if(i+1>=m)
        {
            i++;
            oper++;
                      //cout<<"oper at i="<<i-1<<" "<<start<<endl;

        }
    }
   printf("%lld\n",oper);
    return 0;
}