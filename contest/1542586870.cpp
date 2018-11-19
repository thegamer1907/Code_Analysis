#include <bits/stdc++.h>
#define lli long long int

using namespace std;



int main()
{
    std::ios::sync_with_stdio(false);
    string a,b[100];
    int n,i,ii,j,flag=0;
    cin>>a;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>b[i];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            string m1=b[i]+b[j];
            string m2=b[j]+b[i];
            for(ii=0;ii<3;ii++)
            {
                if(a[0]==m1[ii]&&a[1]==m1[ii+1])
                    flag=1;
                if(a[0]==m2[ii]&&a[1]==m2[ii+1])
                    flag=1;
            }
        }
    }
    if(flag==1)
        cout<<"YES";
    else
        cout<<"NO";
return 0;
}

