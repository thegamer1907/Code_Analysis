#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int no,extra,s,be=0,temp,sit,d,r;
    cin>>no>>extra;
    s=extra;
    temp=no;
    while(no--)
    {
        cin>>sit;
        s+=sit;
        be=max(sit,be);
    }
    d=s%temp;
    r=s/temp;
    if(d!=0 && r+1>=be) cout<<r+1<<" "<<be+extra<<endl;
    else if(d!=0 && r+1<be) cout<<be<<" "<<be+extra<<endl;
    else if(d==0 && r>=be) cout<<r<<" "<<be+extra<<endl;
    else if(d==0 && r<be) cout<<be<<" "<<be+extra<<endl;
    return 0;
}
