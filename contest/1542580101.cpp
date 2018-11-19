#include<bits/stdc++.h>
using namespace std;
bool buck[16];
long long x[5];
int main()
{
    long long n,k,i,a,b,c,d,z,j;
    cin>>n>>k;
    for(i=0;i<n;++i)
    {
        x[0]=x[1]=x[2]=x[3]=0;
        for(j=0;j<k;++j)
        {
            cin>>x[j];
        }
        d=x[0];c=x[1];b=x[2];a=x[3];
        z=a*8;
        z+=b*4;
        z+=c*2;
        z+=d;
        buck[z]=1;
        for(j=0;j<16;++j)
        {

            if(buck[j]==1)
            {
                //cout<<z<<endl;
                if((j&z)==0)
                {
                    cout<<"YES\n";
                    return 0;
                }
            }

        }
    }
    cout<<"NO\n";
}
