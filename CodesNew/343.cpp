#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    int ar[n+5],sum[n+5];
    ar[0]=0,sum[0]=0;
    for(int i=1;i<=n;i++){
            cin>>ar[i];
            sum[i]=sum[i-1]+ar[i];
    }
    int l=1,h=n;
    vector<int>v;
    v.push_back(0);
    while(l<=h)
    {
        int m = (l+h)/2;
        if(sum[m]<=t){
            l=m+1;
            v.push_back(m);
        }
        else
        {
            int flag=0;
            for(int i=1,j=m;j<=n;j++,i++)
            {
                if(abs(sum[j]-sum[i-1])<=t)
                {
                    l=m+1;
                    v.push_back(m);
                    flag++;
                    break;
                }
            }
            if(flag==0)h=m-1;
        }
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    cout<<v[0]<<endl;
}
