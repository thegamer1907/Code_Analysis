#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],b[n],c[n];
    int sum_a=0,sum_b=0,sum_c=0;
    for(int i=0;i<n;i++)
        cin>>a[i]>>b[i]>>c[i];
    for(int i=0;i<n;i++)
    {
        sum_a+=a[i];
        sum_b+=b[i];
        sum_c+=c[i];
    }
    if(sum_a==0 && sum_b==0 && sum_c==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}