#include<iostream>
using namespace std;

int main()
{
    long long n,times,ans=0,t=0,c;

    cin>>n>>times;

    int ar[n+1];
    ar[0]=0;

    for(int i=1;i<=n;i++)
    {
        cin>>ar[i];
    }
    t = ar[1];
    for(int i=1,j=1;i<=n;i++)
    {
        t = t-ar[i-1];
        if(t<= times)
        {

            while(t<=times && j<n)
            {
                t+=ar[++j];
            }
            if(t<=times){ c=j-i+1;}
            else
            {
               c = j-i;
            }

            ans = max(c,ans);
        }


    }
    cout<<ans<<endl;
}
