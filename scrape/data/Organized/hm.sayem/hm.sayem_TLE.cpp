#include<bits/stdc++.h>

using namespace std;
#define FastRead        ios_base::sync_with_stdio(0)

int main()
{
    FastRead;
    long long n,m,k;
    long long data[100005];

    cin>>n>>m>>k;
    for(int i=0;i<m;i++)    cin>>data[i];

    sort(data,data+m);


    int END=k*((data[0]/k)+1);
    int ans=0;
    int cnt=0;

    for(int i=0;i<m;i++)
    {
        if(data[i]<=END)    cnt++;
        else
        {
            ans++;
            END+=cnt;
            if(data[i]>END)
            {
               int temp=(data[i]-END)%k;
               if(temp==0) temp=k;
               END= data[i]+(k-temp);
            }
            i--;
            cnt=0;
        }

        if(i==m-1) ans++;
    }
    cout<<ans<<endl;
}