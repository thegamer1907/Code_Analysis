#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,t,req,i,j,s=1;      map<int,int> worms;
    cin>>n;
    for(i=0;i<n&&scanf("%d",&t);i++){
        for(j=0;j<t;j++)worms[j+s]=i+1;
        s+=t;
    }
    cin>>req;
    for(i=0;i<req&&scanf("%d",&t);i++)cout<<worms[t]<<endl;
    return 0;
}