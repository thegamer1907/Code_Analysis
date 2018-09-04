#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    string s;

    long long cnt=0;
    cin>>s;

    long long n=s.size();
    long long Z[n];
    long long l=-1,r=-1;


    if(n<=2)
    {
        cout<<"Just a legend";
        return 0;
    }
    Z[0]=n;

    long long maxxx=0;

    for(long long i=1;i<n;++i)
    {
        if(i>r)
        {
            l=r=i;
            while(r<n&&s[r]==s[r-l]) r++;
            Z[i]=r-l;
            r--;
        }
        else
        {
            long long k=i-l;
            if(Z[k]<r-i+1) Z[i]=Z[k];
            else
            {
                l=i;
                while(r<n&&s[r]==s[r-l]) r++;
                Z[i]=r-l;
                r--;
            }
        }
        //cout<<i<<" "<<Z[i]<<"\n";
        if(Z[i]!=n-i)
        {
            maxxx=max(maxxx,Z[i]);
        }
        else
        {
            maxxx=max(maxxx,Z[i]-1);
        }
    }

    long long maxx=0;

    for(long long i=1;i<n-1;++i)
    {
        if(i<=maxxx&&Z[n-i]==i) maxx=i;
    }

    //cout<<"maxx="<<maxx<<"\n";
    //cout<<" Z[n-maxx] = "<<Z[n-maxx]<<"\n";
    if(maxx==0)
    {
        cout<<"Just a legend";
        return 0;
    }
    for(long long i=0;i<maxx;++i) cout<<s[i];

    return 0;
}

