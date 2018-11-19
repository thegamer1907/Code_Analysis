#include<bits/stdc++.h>
using namespace std;
int arr[100005]= {0};

int main()
{
    int n,m,i,j,k,l;
    cin>>n>>k;
    for(i=0; i<n; i++)
    {
        int sum=0,mul=1;;
        for(j=0; j<k; j++)
        {
            cin>>l;
            sum*=2;
            sum+=l;
        }

        arr[sum]++;
    }

    if(arr[0])
    {
        cout<<"YES"<<endl;
        return 0;
    }
    if(k==1 && arr[0]==0)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    for(i=1;i<(1<<k);i++)
    {
        for(j=1;j<(1<<k);j++)
        {

            if(arr[i] && arr[j] && i!=j)
            {
                if((i&j)==0)
                {
                    cout<<"YES"<<endl;
                    return 0;
                }
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
