#include<bits\stdc++.h>
using namespace std;
int main()
{
    int n,a[1000]= {0};
    int one[1000]= {0};
    int zero[1000]= {0};
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        if(a[i]==1)
            one[i]=one[i-1]+a[i];
        else one[i]=one[i-1];
        if(a[i]==0)
            zero[i]=zero[i-1]+1;
        else
            zero[i]=zero[i-1];
    }
    int ans=0;
    int o=0;
    int z=0;
    if(n==1&&a[1]==0){
        cout<<1<<endl;return 0;}
    for(int i=1; i<=n; i++)
        for(int j=i+1; j<=n; j++)
        {
            if((zero[j]-zero[i-1])-(one[j]-one[i-1])>ans)
            {
                ans=(zero[j]-zero[i-1])-(one[j]-one[i-1]);
                o=one[j]-one[i-1];
                z=zero[j]-zero[i-1];
            }

        }
    if(one[n]==n)

        cout<<(one[n]-o+z-1)<<endl;
    else

        cout<<(one[n]-o+z)<<endl;
    return 0;
}
