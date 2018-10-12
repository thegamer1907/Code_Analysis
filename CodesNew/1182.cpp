#include<bits/stdc++.h>

using namespace std;

const int maxn=1e5+5;
int a[maxn];

int main()
{
    int n,x,t,k=1e9,pos;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>x;
        int p=x-x/n*n;
        if (p>i-1) t=x/n+1; else t=x/n;
        if (t<k) {k=t; pos=i;}
    }
    cout<<pos<<endl;
        
    

}

