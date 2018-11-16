#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k,w,n;
    cin>>k>>n>>w;
    int a=w*(w+1)*k/2;
    if(a>n)
        cout<<a-n;
    else cout<<"0";


}

