#include<bits/stdc++.h>
using namespace std;
struct node
{
    int a;
    int b;
    int c;
};
int main()
{
    int n,sum=0,sum1=0,sum2=0,x,y,z;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x>>y>>z;
        sum+=x;
        sum1+=y;
        sum2+=z;
    }
    if(sum==0 && sum1==0 && sum2==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
