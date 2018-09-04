#include<bits/stdc++.h>
using namespace std;
map<string,int>a;
int main()
{
    long long m,n;
    cin>>n>>m;
    getchar();
    string x;

    if(n!=m) {
       cout<< ((n>m)?"YES":"NO")<<endl;
    }
    else{
    for(long long i=0;i<n;i++)
    {
        cin>>x;
        a[x]=1;

    }
    long long k=0;
    for(long long i=0;i<m;i++)
    {
        cin>>x;
        if(a[x]==1) k++;

    }

    //cout<<k;
    cout<<((k%2)? "YES":"NO")<<endl;
    }

   return 0;
}
